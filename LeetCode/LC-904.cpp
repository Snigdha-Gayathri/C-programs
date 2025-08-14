#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> basket;
        int left = 0;
        int maxFruits = 0;

        for (int right = 0; right < (int)fruits.size(); ++right) {
            basket[fruits[right]]++;

            // If we have more than 2 types, shrink window from left
            while (basket.size() > 2) {
                basket[fruits[left]]--;
                if (basket[fruits[left]] == 0) {
                    basket.erase(fruits[left]);
                }
                left++;
            }

            maxFruits = max(maxFruits, right - left + 1);
        }

        return maxFruits;
    }
};

int main() {
    int n;
    cout << "Enter number of fruits: ";
    cin >> n;

    vector<int> fruits(n);
    cout << "Enter fruit types (as integers):\n";
    for (int i = 0; i < n; i++) cin >> fruits[i];

    Solution sol;
    int result = sol.totalFruit(fruits);
    cout << "Maximum number of fruits: " << result << "\n";

    return 0;
}
