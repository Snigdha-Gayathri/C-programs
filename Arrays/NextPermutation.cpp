#include <bits/stdc++.h>
using namespace std;

vector<int> NextPermutation(vector<int>& A) {
    int ind = -1;
    int n = A.size();
    for (int i = n - 2; i >= 0; i--) 
    {
        if (A[i] < A[i + 1]) 
        {
            ind = i;
            break;
        }
    }
    
    if (ind == -1) 
    {
        reverse(A.begin(), A.end());
        return A;
    }
    
    
    for (int i = n - 1; i > ind; i--)
     {
        if (A[i] > A[ind]) 
        {
            swap(A[i], A[ind]);
            break;
        }
    }
    reverse(A.begin() + ind + 1, A.end());
    return A;
}

int main() 
{
    int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;
    
    vector<int> A(n);
    
    cout << "Enter the elements of the vector:\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    vector<int> nextPerm = NextPermutation(A);
    
    cout << "Next permutation: ";
    for (int num : nextPerm) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}