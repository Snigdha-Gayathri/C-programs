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
    cout<<"Enter XOR value: "<<endl;
    int k;
    cin>>k;
    int xr=0;
    map<int,int>mpp;
    mpp[xr]++;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        xr=xr^arr[i];
        int x=xr^k;
        cnt+=mpp[x];
        mpp[xr]++;
    }
    cout<<cnt;
    return 0;
}