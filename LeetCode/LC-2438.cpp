#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    const long long MOD = 1e9 + 7;

    // Fast modular exponentiation
    long long modPow(long long base, long long exp) {
        long long result = 1;
        while (exp > 0) {
            if (exp & 1) result = (result * base) % MOD;
            base = (base * base) % MOD;
            exp >>= 1;
        }
        return result;
    }

    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        // Step 1: Build powers array (binary decomposition)
        vector<long long> powers;
        for (int i = 0; i < 31; i++) { // n <= 10^9, so 31 bits are enough
            if (n & (1 << i)) {
                powers.push_back(1LL << i);
            }
        }

        // Step 2: Build prefix product array
        vector<long long> prefix(powers.size() + 1, 1);
        for (int i = 0; i < (int)powers.size(); i++) {
            prefix[i + 1] = (prefix[i] * powers[i]) % MOD;
        }

        // Step 3: Answer queries
        vector<int> ans;
        for (auto &q : queries) {
            int l = q[0], r = q[1];
            long long numerator = prefix[r + 1];
            long long denominatorInv = modPow(prefix[l], MOD - 2); // modular inverse using Fermat's Little Theorem
            long long product = (numerator * denominatorInv) % MOD;
            ans.push_back((int)product);
        }
        return ans;
    }
};

int main() {
    int n, q;
    cout << "Enter n: ";
    cin >> n;

    cout << "Enter number of queries: ";
    cin >> q;

    vector<vector<int>> queries(q, vector<int>(2));
    cout << "Enter queries (l r):\n";
    for (int i = 0; i < q; i++) {
        cin >> queries[i][0] >> queries[i][1];
    }

    Solution sol;
    vector<int> result = sol.productQueries(n, queries);

    cout << "Results:\n";
    for (int val : result) {
        cout << val << "\n";
    }

    return 0;
}
