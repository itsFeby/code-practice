#include <iostream>
#include <vector>
#include <limits>

int main()
{
    int MATRIX_SIZE{0};
    int DEFAULT_VALUE{0};

    std::cout << "Input matrix size: ";

    while (!(std::cin >> MATRIX_SIZE) || MATRIX_SIZE <= 0){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Enter a positive integer: ";
    }

    std::vector<std::vector<int>> matrix(MATRIX_SIZE, std::vector<int>(MATRIX_SIZE, DEFAULT_VALUE));

    for (int i = 0; i < MATRIX_SIZE; ++i) {
        matrix[i][i] = i+1;
        int j = MATRIX_SIZE - 1 - i;
        if (i != j) {
            matrix[i][j] = i + 1;
        }
    }

    for (const auto& row : matrix){
        for (size_t j = 0; j < row.size(); ++j){
            if (row[j] == 0) {
                std::cout << ".";
            } else {
                std::cout << row[j];
            }
            if (j < row.size() - 1) std::cout << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
