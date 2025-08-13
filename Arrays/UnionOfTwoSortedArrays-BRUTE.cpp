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

    set<int> st; 
    for (int i = 0; i < n1; i++) {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < n2; i++) {
        st.insert(arr2[i]);
    }

    
    vector<int> unionArr(st.begin(), st.end()); 
    
    for (auto it = unionArr.begin(); it != unionArr.end(); it++) {
        cout << *it << " ";
    }
    cout << endl; 

    return 0;
}