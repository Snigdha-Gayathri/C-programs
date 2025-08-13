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
    vector<int>pos,neg;
    for(int i=0;i<n/2;i++)
    {
        arr[2*i]=pos[i];
        arr[2*i+1]=neg[i];

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}