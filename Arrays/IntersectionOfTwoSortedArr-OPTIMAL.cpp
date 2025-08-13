#include <bits/stdc++.h>
using namespace std;

vector<int> IntersectionArr(vector<int> A, vector<int> B) {
    int i = 0, j = 0;
    vector<int> ins;
    while (i < A.size() && j < B.size()) {
        if (A[i] < B[j]) {
            i++;
        } else if (B[j] < A[i]) {
            j++;
        } else {
            ins.push_back(A[i]);
            i++;
            j++;
        }
    }
    return ins;
}

int main() {
    cout << "Enter the size of the 1st array: " << endl;
    int n1;
    cin >> n1;
    vector<int> a(n1); 
    cout << "Enter the elements of the 1st array: " << endl;
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }

    cout << "Enter the size of the 2nd array: " << endl;
    int n2;
    cin >> n2;
    vector<int> b(n2); 
    cout << "Enter the elements of the 2nd array: " << endl;
    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }

    vector<int> result = IntersectionArr(a, b);

    
    for (auto it : result) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}