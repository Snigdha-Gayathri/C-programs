#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    const int MOD = 1e9 + 7;
    vector<vector<int>> dp;

    int solve(int rem, int curr, int x) {
        if (rem == 0) return 1;            // Found a way
        if (rem < 0) return 0;             // Invalid
        long long power = pow(curr, x);
        if (power > rem) return 0;         // Can't use this number

        if (dp[rem][curr] != -1) return dp[rem][curr];

        // Include curr OR skip curr
        long long take = solve(rem - power, curr + 1, x);
        long long skip = solve(rem, curr + 1, x);

        return dp[rem][curr] = (take + skip) % MOD;
    }

    int numberOfWays(int n, int x) {
        dp.assign(n + 1, vector<int>(n + 1, -1));
        return solve(n, 1, x);
    }
};
