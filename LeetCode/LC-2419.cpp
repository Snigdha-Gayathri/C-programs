#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxVal = *max_element(nums.begin(), nums.end());
        int maxLen = 0, currLen = 0;

        for (int num : nums) {
            if (num == maxVal) {
                currLen++;
                maxLen = max(maxLen, currLen);
            } else {
                currLen = 0; // reset when num != maxVal
            }
        }

        return maxLen;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 3, 2, 3}; // example input
    cout << "Longest subarray length: " << sol.longestSubarray(nums) << endl;
    return 0;
}
