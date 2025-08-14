#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;   // negative numbers & 0 are not powers of two
        while (n % 2 == 0) {
            n /= 2;
        }
        return n == 1;
    }
};

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    Solution sol;
    if (sol.isPowerOfTwo(n))
        cout << n << " is a power of two.\n";
    else
        cout << n << " is NOT a power of two.\n";

    return 0;
}
