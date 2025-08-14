#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string countDigits(int num) {
        string cnt(10, '0'); // store counts as chars
        while (num > 0) {
            cnt[num % 10]++; 
            num /= 10;
        }
        return cnt;
    }
    
    bool reorderedPowerOf2(int n) {
        string target = countDigits(n);
        for (int i = 0; i < 31; i++) { // 2^0 to 2^30 covers <= 1e9
            if (countDigits(1 << i) == target) return true;
        }
        return false;
    }
};

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    Solution sol;
    if (sol.reorderedPowerOf2(n))
        cout << n << " can be reordered to form a power of 2.\n";
    else
        cout << n << " cannot be reordered to form a power of 2.\n";

    return 0;
}
