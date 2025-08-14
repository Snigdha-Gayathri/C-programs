#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        int n = fruits.size();
        int maxFruits = 0;
        int windowSum = 0;
        int i = 0;

        for (int j = 0; j < n; ++j) {
            windowSum += fruits[j][1];

            // Shrink window from left if it's unreachable
            while (i <= j) {
                int left = fruits[i][0];
                int right = fruits[j][0];

                int steps = min(
                    abs(startPos - left) + (right - left),  // go left first
                    abs(startPos - right) + (right - left)  // go right first
                );

                if (steps <= k) break; // reachable
                windowSum -= fruits[i][1];
                ++i; // shrink from left
            }

            maxFruits = max(maxFruits, windowSum);
        }

        return maxFruits;
    }
};

int main() {
    int n, startPos, k;
    cout << "Enter number of fruit locations: ";
    cin >> n;

    vector<vector<int>> fruits(n, vector<int>(2));
    cout << "Enter fruit positions and amounts (pos amount):\n";
    for (int i = 0; i < n; i++) {
        cin >> fruits[i][0] >> fruits[i][1];
    }

    cout << "Enter starting position: ";
    cin >> startPos;
    cout << "Enter maximum steps allowed (k): ";
    cin >> k;

    Solution sol;
    int result = sol.maxTotalFruits(fruits, startPos, k);
    cout << "Maximum fruits collected: " << result << "\n";

    return 0;
}
