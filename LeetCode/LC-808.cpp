#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    double soupServings(int n) {
        if (n > 4800) return 1.0; // approximation cutoff for large n
        int units = (n + 24) / 25; // convert to 25 mL units
        memo.clear();
        return dfs(units, units);
    }

private:
    unordered_map<long long, double> memo;

    double dfs(int a, int b) {
        if (a <= 0 && b <= 0) return 0.5;
        if (a <= 0) return 1.0;
        if (b <= 0) return 0.0;

        long long key = ((long long)a << 20) | b;
        if (memo.count(key)) return memo[key];

        double res = 0.25 * (
            dfs(a - 4, b) +
            dfs(a - 3, b - 1) +
            dfs(a - 2, b - 2) +
            dfs(a - 1, b - 3)
        );

        return memo[key] = res;
    }
};

int main() {
    int n;
    cout << "Enter amount of soup in mL: ";
    cin >> n;

    Solution sol;
    double probability = sol.soupServings(n);

    cout << "Probability that soup A will be empty first: " << probability << "\n";

    return 0;
}
