#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        map<int, int> count;

        // Step 1: Count frequency of each fruit
        for (int val : basket1) count[val]++;
        for (int val : basket2) count[val]--;

        vector<int> extra;

        // Step 2: Collect the "extra" fruits from both baskets
        for (auto &[fruit, freq] : count) {
            // If total imbalance is odd → impossible
            if (freq % 2 != 0) return -1;
            // Only need half the imbalance (each swap fixes 2)
            for (int i = 0; i < abs(freq) / 2; i++) {
                extra.push_back(fruit);
            }
        }

        // Step 3: Optimization trick
        sort(extra.begin(), extra.end());

        int n = extra.size();
        long long totalCost = 0;

        // Find the smallest fruit value in either basket
        int minVal = min(*min_element(basket1.begin(), basket1.end()),
                         *min_element(basket2.begin(), basket2.end()));

        // Step 4: Only process the first half of extra (the rest are matched swaps)
        for (int i = 0; i < n / 2; i++) {
            totalCost += min(extra[i], 2 * minVal);
        }

        return totalCost;
    }
};

int main() {
    Solution sol;

    // Example Input
    vector<int> basket1 = {4, 4, 4};
    vector<int> basket2 = {5, 5, 5};

    long long result = sol.minCost(basket1, basket2);

    if (result == -1) {
        cout << "Impossible to make baskets equal" << endl;
    } else {
        cout << "Minimum cost to make baskets equal: " << result << endl;
    }

    return 0;
}
