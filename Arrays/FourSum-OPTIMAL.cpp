#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < n; i++) 
    {
        if (i > 0 && nums[i] == nums[i - 1]) continue; 
        for (int j = i + 1; j < n; j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            int k = j + 1;
            int l = n - 1;
            while (k < l) 
            {
                long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[k] + nums[l];
                if (sum < target) 
                {
                    k++;
                } 
                else if (sum > target) 
                {
                    l--;
                } 
                else 
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    
                    while (k < l && nums[k] == nums[k - 1]) k++;
                    while (k < l && nums[l] == nums[l + 1]) l--;
                }
            }
        }
    }
    return ans;
}

int main() {
    cout << "Enter the size of the array: " << endl;
    int n;
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter target: " << endl;
    int target;
    cin >> target;
    
    vector<vector<int>> res = fourSum(nums, target);
    cout << "Quads that sum up to given target are: " << endl;
    for (const auto& quad : res) {
        cout << "[" << quad[0] << ", " << quad[1] << ", " << quad[2] << ", " << quad[3] << "]" << endl;
    }

    return 0;
}