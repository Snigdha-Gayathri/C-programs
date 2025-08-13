#include <bits/stdc++.h>
using namespace std;

string read(int n, vector<int>& arr, int target) {
    int left = 0;
    int right = n - 1;
    sort(arr.begin(), arr.end());
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return "NO";
}

int main() {
    cout << "Enter the size of the array: " << endl;
    int n;
    cin >> n;

    vector<int> arr(n); 
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target: " << endl;
    cin >> target;

    string result = read(n, arr, target); 
    cout << result << endl; 

    return 0;
}