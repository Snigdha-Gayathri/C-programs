#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    using ll = long long;

    ll kthSmallestProduct(const vector<int>& nums1, const vector<int>& nums2, ll k) {
        ll left = -1e10, right = 1e10, ans = 0;
        while (left <= right) {
            ll mid = left + (right - left) / 2;
            if (countNoGreater(nums1, nums2, mid) >= k) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }

private:
    ll countNoGreater(const vector<int>& A, const vector<int>& B, ll x) {
        ll count = 0;
        int nB = B.size();
        for (int a : A) {
            if (a > 0) {
                // Find largest j such that a * B[j] <= x
                ll target = x / a;
                int c = upper_bound(B.begin(), B.end(), target) - B.begin();
                count += c;
            } else if (a < 0) {
                // For negative a, inequality flips: need B[j] >= ceil(x/a)
                ll target = (x + (a + 1)) / a; // careful ceil for negative
                int c = B.end() - lower_bound(B.begin(), B.end(), target);
                count += c;
            } else { // a == 0
                if (x >= 0) count += nB;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {-2, -1, 0, 1, 2};
    vector<int> nums2 = {-3, -1, 2, 4, 5};
    long long k = 3;

    long long res = sol.kthSmallestProduct(nums1, nums2, k);
    cout << "The " << k << "-th smallest product is " << res << endl;

    return 0;
}
