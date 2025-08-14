#include <iostream>
#include <vector>
#include <unordered_set>
#include <set>
using namespace std;

class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> res; // Stores all unique OR results
        set<int> cur;           // Stores OR results for subarrays ending at current index

        for (int num : arr) {
            set<int> next_cur;
            next_cur.insert(num); // Start a new subarray with current number

            for (int prev : cur) {
                next_cur.insert(num | prev); // Extend previous subarrays with num
            }

            cur = next_cur;
            for (int val : cur) {
                res.insert(val); // Add to final result set
            }
        }

        return res.size();
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 4}; // Example input
    cout << "Number of distinct bitwise ORs of subarrays: "
         << sol.subarrayBitwiseORs(arr) << endl;

    return 0;
}
