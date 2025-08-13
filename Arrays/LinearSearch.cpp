#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched: ";
    int search;
    cin>>search;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            cout<<"The req. element is "<<search<<" found at index  "<<i<<endl;
        }

    }   
    return -1;    
    
    
    return 0;
}