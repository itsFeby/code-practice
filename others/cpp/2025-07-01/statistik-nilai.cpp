#include <iostream>
#include <vector>
#include <sstream>
#include <climits>
#include <cmath>

std::vector<int> userInput()
{
    std::cout << "Enter a list of numbers separated by spaces: ";
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    std::vector<int> array;
    int num;

    while (iss >> num) {
        array.push_back(num);
    }
    if (array.empty() && !input.empty()) {
        throw std::runtime_error("Invalid input - no numbers entered");
    }

    return array;
}

double rata_rata(std::vector<int>& array)
{
    if (array.empty()) {
        throw std::runtime_error("Cannot calculate average of empty array");
    }
    int sum = 0;
    for(int num : array) {
        sum += num;
    }
    return static_cast<double>(sum) / array.size();
}

void findMinMax(const std::vector<int>& arr, int& min, int& max)
{
    if (arr.empty()) {
        throw std::runtime_error("Array kosong!");
    }

    min = INT_MAX;
    max = INT_MIN;

    for (int num : arr) {
        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }
}

void gambarGrafikAsterisk(std::string label, double x) {
    int jumlahBintang = static_cast<int>(std::round(x));

    std::cout << label << " (" << x << "): ";
    for (int i = 0; i < jumlahBintang; ++i) {
        std::cout << "*";
    }
    std::cout << std::endl;
}
int main()
{
    try
    {
        std::vector<int> input = userInput();
        double avg = rata_rata(input);
        std::cout << "Rata-rata: " << avg << std::endl;

        int min, max;
        findMinMax(input, min, max);
        std::cout << "Nilai terendah: " << min << std::endl;
        std::cout << "Nilai tertinggi: " << max << std::endl;

        std::cout << std::endl;

        gambarGrafikAsterisk("rata-rata", avg);
        gambarGrafikAsterisk("nilai terendah", min);
        gambarGrafikAsterisk("nilai tertinggi", max);
    } catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
