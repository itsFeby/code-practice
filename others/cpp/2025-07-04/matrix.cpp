#include <iostream>
#include <vector>

int main()
{
    std::vector<std::vector<int>> matrix(5, std::vector<int>(5, 0));

    for (auto& row : matrix) {
        for (int& val : row){
            val = 12;
        }
    }

    matrix[0][0] = 1;
    matrix[1][1] = 2;
    matrix[2][2] = 3;
    matrix[3][3] = 4;
    matrix[4][4] = 5;

    for (const auto& row : matrix){
        for (int val : row){
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
