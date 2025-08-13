#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    long long a, b;
    cin >> a >> b;

    long long commonGCD = gcd(a, b);
    long long count = 0;

    long long sqrtGCD = sqrt(commonGCD);

    for (long long i = 1; i <= sqrtGCD; ++i) {
        if (commonGCD % i == 0) {
            if (commonGCD / i == i) {
                count++;
            } else {
                count += 2;
            }
        }
    }

    cout << count << endl;

    return 0;
}