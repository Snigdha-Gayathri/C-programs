#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> bitLastSeen(32, -1); // Stores last index where each bit was seen
        vector<int> answer(n, 1); // Default length is 1
        
        for (int i = n - 1; i >= 0; --i) {
            // Update last seen indices for bits set in nums[i]
            for (int b = 0; b < 32; ++b) {
                if ((nums[i] >> b) & 1) {
                    bitLastSeen[b] = i;
                }
            }
            
            // Find farthest index to include all needed bits
            int farthest = i;
            for (int b = 0; b < 32; ++b) {
                if (bitLastSeen[b] != -1) {
                    farthest = max(farthest, bitLastSeen[b]);
                }
            }
            
            answer[i] = farthest - i + 1;
        }
        
        return answer;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 0, 2, 1, 3};
    vector<int> result = sol.smallestSubarrays(nums);
    
    cout << "Result: ";
    for (int len : result) {
        cout << len << " ";
    }
    cout << endl;
    
    return 0;
}
