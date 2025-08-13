#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    cout<<"Enter the size of the array: "<<endl;
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);


    int slargest=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]!=arr[n-1])
        {
            cout<<arr[i]<<endl;
            break;

        }
    }
    
    return 0;
}