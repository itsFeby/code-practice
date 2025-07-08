#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        if (mat.empty() || mat[0].empty()) return {};

        unordered_map<int, vector<int>> lines;
        int rows = mat.size();
        int cols = mat[0].size();

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                lines[i + j].push_back(mat[i][j]);
            }
        }

        vector<int> res;
        for (int k = 0; k < rows + cols - 1; ++k) {
            if (k % 2 == 0) {
                res.insert(res.end(), lines[k].rbegin(), lines[k].rend());
            } else {
                res.insert(res.end(), lines[k].begin(), lines[k].end());
            }
        }

        return res;
    }
};

int main() {
    // Example 1: 3x3 matrix
    vector<vector<int>> matrix1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution sol;
    vector<int> result1 = sol.findDiagonalOrder(matrix1);

    cout << "Diagonal order for matrix1: ";
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;

    // Example 2: 2x3 matrix
    vector<vector<int>> matrix2 = {
        {1, 2, 3},
        {4, 5, 6}
    };

    vector<int> result2 = sol.findDiagonalOrder(matrix2);

    cout << "Diagonal order for matrix2: ";
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
