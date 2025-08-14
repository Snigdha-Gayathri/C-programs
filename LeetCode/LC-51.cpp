#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        vector<bool> cols(n, false), diag1(2 * n - 1, false), diag2(2 * n - 1, false);
        backtrack(0, n, board, cols, diag1, diag2, ans);
        return ans;
    }

private:
    void backtrack(int row, int n,
                   vector<string>& board,
                   vector<bool>& cols,
                   vector<bool>& diag1,
                   vector<bool>& diag2,
                   vector<vector<string>>& ans) {
        if (row == n) {
            ans.push_back(board);
            return;
        }
        for (int col = 0; col < n; ++col) {
            int d1 = row + col;
            int d2 = col - row + n - 1;
            if (cols[col] || diag1[d1] || diag2[d2]) continue;
            board[row][col] = 'Q';
            cols[col] = diag1[d1] = diag2[d2] = true;

            backtrack(row + 1, n, board, cols, diag1, diag2, ans);

            board[row][col] = '.';
            cols[col] = diag1[d1] = diag2[d2] = false;
        }
    }
};

int main() {
    int n = 4; // try any value between 1 and 9
    Solution sol;
    auto solutions = sol.solveNQueens(n);

    cout << "Found " << solutions.size() << " solutions for n = " << n << ":\n\n";
    for (const auto& board : solutions) {
        for (const auto& row : board) {
            cout << row << "\n";
        }
        cout << "\n";
    }
    return 0;
}
