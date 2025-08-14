#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;   
        while (n % 3 == 0) {
            n /= 3;
        }
        return n == 1;
    }
};

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    Solution sol;
    bool result = sol.isPowerOfThree(n);

    if (result)
        cout << n << " is a power of 3.\n";
    else
        cout << n << " is NOT a power of 3.\n";

    return 0;
}
