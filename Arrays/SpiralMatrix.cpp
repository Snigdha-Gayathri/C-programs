#include <bits/stdc++.h>
using namespace std;

vector<int> SpiralMatrix(vector<vector<int>>& mat) {
    int n = mat.size(); // Size of the square matrix
    int left = 0, right = n - 1; // Column boundaries
    int top = 0, bottom = n - 1; // Row boundaries
    vector<int> ans;

    while (top <= bottom && left <= right) {
        // Traverse from left to right
        for (int i = left; i <= right; i++) {
            ans.push_back(mat[top][i]);
        }
        top++;

        // Traverse from top to bottom
        for (int i = top; i <= bottom; i++) {
            ans.push_back(mat[i][right]);
        }
        right--;

        // Traverse from right to left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }

        // Traverse from bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));
    
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "Original matrix:\n";
    for (const auto& row : mat) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    // Get the spiral order
    vector<int> spiralOrder = SpiralMatrix(mat);

    // Reshape the spiral order into a rotated matrix
    vector<vector<int>> rotatedMat(n, vector<int>(n));
    int idx = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotatedMat[j][n - 1 - i] = spiralOrder[idx++];
        }
    }

    cout << "Rotated matrix (90 degrees clockwise):\n";
    for (const auto& row : rotatedMat) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}