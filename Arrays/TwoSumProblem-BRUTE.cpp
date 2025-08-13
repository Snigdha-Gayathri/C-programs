#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter the size of the array: " << endl;
    int n;
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter target: " << endl;
    int target;
    cin >> target;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
    
    return 0;
}