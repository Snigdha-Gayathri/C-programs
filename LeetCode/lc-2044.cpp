#include <iostream>
#include <vector>
#include <numeric> // for accumulate
using namespace std;

class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        // Compute maximum possible OR by OR-ing all elements
        int maxOR = accumulate(nums.begin(), nums.end(), 0, [](int a, int b) {
            return a | b;
        });

        int count = 0;
        dfs(nums, 0, 0, maxOR, count);
        return count;
    }

private:
    void dfs(const vector<int>& nums, int idx, int currentOR, int maxOR, int& count) {
        if (idx == nums.size()) {
            if (currentOR == maxOR) {
                count++;
            }
            return;
        }
        // Option 1: Skip current element
        dfs(nums, idx + 1, currentOR, maxOR, count);
        // Option 2: Include current element
        dfs(nums, idx + 1, currentOR | nums[idx], maxOR, count);
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 1, 5}; // Example input
    int result = sol.countMaxOrSubsets(nums);
    cout << "Number of max-OR subsets: " << result << endl;
    return 0;
}
