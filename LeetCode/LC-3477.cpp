#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        vector<bool> used(n, false);  // To track if a basket is already used
        int unplaced = 0;

        for (int i = 0; i < n; ++i) {
            bool placed = false;
            for (int j = 0; j < n; ++j) {
                if (!used[j] && baskets[j] >= fruits[i]) {
                    used[j] = true;  // Mark basket as used
                    placed = true;
                    break;  // Move to next fruit
                }
            }
            if (!placed) unplaced++;
        }
        return unplaced;
    }
};

int main() {
    int n;
    cout << "Enter number of fruits/baskets: ";
    cin >> n;

    vector<int> fruits(n), baskets(n);
    cout << "Enter fruits array:\n";
    for (int i = 0; i < n; i++) cin >> fruits[i];
    cout << "Enter baskets array:\n";
    for (int i = 0; i < n; i++) cin >> baskets[i];

    Solution sol;
    int result = sol.numOfUnplacedFruits(fruits, baskets);
    cout << "Number of unplaced fruits: " << result << "\n";

    return 0;
}
