#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) 
{
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    vector<int> unionArr;

    while (i < n1 && j < n2) 
    {
        if (a[i] < b[j]) 
        {
            
            if (unionArr.empty() || unionArr.back() != a[i]) 
            {
                unionArr.push_back(a[i]);
            }
            i++;
        } 
        else if (a[i] > b[j]) 
        {
            
            if (unionArr.empty() || unionArr.back() != b[j]) 
            {
                unionArr.push_back(b[j]);
            }
            j++;
        } 
        else 
        { 
            
            if (unionArr.empty() || unionArr.back() != a[i]) 
            {
                unionArr.push_back(a[i]);
            }
            i++;
            j++;
        }
    }

    
    while (i < n1) 
    {
        if (unionArr.empty() || unionArr.back() != a[i]) 
        {
            unionArr.push_back(a[i]);
        }
        i++;
    }

    
    while (j < n2) 
    {
        if (unionArr.empty() || unionArr.back() != b[j]) 
        {
            unionArr.push_back(b[j]);
        }
        j++;
    }

    return unionArr; 
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

    vector<int> result = sortedArray(a, b); 

    
    for (auto it : result) {
        cout << it << " ";
    }
    cout << endl; 

    return 0;
}