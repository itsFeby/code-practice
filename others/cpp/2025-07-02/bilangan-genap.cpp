//program to find even numbers from numbers entered by the user

#include <iostream>
#include <vector>
#include <sstream>


std::vector<int> userInput()
{
    std::cout << "Enter a list of numbers separated by spaces: ";
    std::string input;
    std::getline(std::cin, input);

    if (input.empty()) {
        std::cout << "Input is empty. Try again!" << std::endl;
        return {};
    }

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

std::vector<int> findEven(const std::vector<int>& arr)
{
    if (arr.empty()) {
        throw std::runtime_error("Array is empty!");
    }

    std::vector<int> evenNumbers;
    for (int num : arr) {
        if (num % 2 ==0){
            evenNumbers.push_back(num);
        }
    }
    return evenNumbers;
}

int main(){

    try {
        std::vector<int> input = userInput();
        std::vector<int> evenNumbers = findEven(input);

        if (evenNumbers.empty()) {
            std::cout << "No even numbers found." << std::endl;
        } else {
            std::cout << "Even numbers: ";
            for (int num : evenNumbers) {
                std::cout << num << " ";
            }
            std::cout << "\nTotal even numbers: " << evenNumbers.size() << std::endl;
        }
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
