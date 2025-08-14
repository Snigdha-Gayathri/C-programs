#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;

        // First row is always [1]
        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1); // start with all 1's
            for (int j = 1; j < i; j++) {
                // Each element is sum of the two above it
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
            triangle.push_back(row);
        }

        return triangle;
    }
};

int main() {
    Solution sol;
    int numRows = 5; // example
    vector<vector<int>> result = sol.generate(numRows);

    // Print the Pascal's Triangle
    for (auto &row : result) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
