#include <iostream>
#include <string>
#include <algorithm> // for max if needed
using namespace std;

class Solution {
public:
    string largestGoodInteger(string num) {
        string maxGood = "";

        for (int i = 0; i <= (int)num.size() - 3; i++) {
            // Take substring of length 3
            string sub = num.substr(i, 3);

            // Check if all characters are the same
            if (sub[0] == sub[1] && sub[1] == sub[2]) {
                if (sub > maxGood) { // Lexicographical comparison works for digits
                    maxGood = sub;
                }
            }
        }

        return maxGood;
    }
};

int main() {
    string num;
    cout << "Enter the number string: ";
    cin >> num;

    Solution sol;
    string result = sol.largestGoodInteger(num);

    if (result.empty())
        cout << "No good integer found.\n";
    else
        cout << "Largest good integer: " << result << "\n";

    return 0;
}
