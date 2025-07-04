#include <iostream>
#include <vector>
#include <iomanip> // untuk setw()

int main() {
    int n;
    std::cout << "Ukuran matriks: ";
    std::cin >> n;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(n, 0));

    int value = 1;
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        // 👉 Kanan
        for (int j = left; j <= right; ++j)
            matrix[top][j] = value++;
        ++top;

        // 👇 Bawah
        for (int i = top; i <= bottom; ++i)
            matrix[i][right] = value++;
        --right;

        // 👈 Kiri
        if (top <= bottom) {
            for (int j = right; j >= left; --j)
                matrix[bottom][j] = value++;
            --bottom;
        }

        // ☝️ Atas
        if (left <= right) {
            for (int i = bottom; i >= top; --i)
                matrix[i][left] = value++;
            ++left;
        }
    }

    std::cout << "\nMatrix Spiral:\n";
    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << std::setw(3) << num << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
