#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter the size of the 1st array: " << endl;
    int n1;
    cin >> n1;
    vector<int> arr1(n1); 
    cout << "Enter the elements of the 1st array: " << endl;
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the 2nd array: " << endl;
    int n2;
    cin >> n2;
    vector<int> arr2(n2); 
    cout << "Enter the elements of the 2nd array: " << endl;
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    vector<int> ins; 
    vector<int> vis(n2, 0); 

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j] && vis[j] == 0) {
                ins.push_back(arr1[i]);
                vis[j] = 1; 
                break; 
            }
        }
    }

   
    for (auto it = ins.begin(); it != ins.end(); it++) {
        cout << *it << " ";
    }
    cout << endl; 

    return 0;
}