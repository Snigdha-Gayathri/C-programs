#include <bits/stdc++.h>
using namespace std;

string read(int n, vector<int>& arr, int target) {
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int a = arr[i];
        int more = target - a;
        if (mpp.find(more) != mpp.end()) {
            return "YES"; 
        }
        mpp[a] = i; 
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
    
    cout << "Enter target: " << endl;
    int target;
    cin >> target;
    
    
    string result = read(n, arr, target);
    cout << result << endl; 
    
    return 0;
}