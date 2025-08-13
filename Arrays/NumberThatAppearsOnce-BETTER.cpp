#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    int arr[n];
    int req_num;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxi=arr[0];
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
    }
    hash[maxi+1]=hash[0];
    for(int i =0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(hash[arr[i]]==1)
        {
            req_num=arr[i];
        }
    }
    cout<<req_num;
    return 0;
}