#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the unsorted array- 0,1,2: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int cnt0=0,cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            cnt0++;
        }
        if(arr[i]==1)
        {
            cnt1++;
        }
        if(arr[i]==2){
            cnt2++;
        }
    }
    for(int i=0;i<cnt0;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<cnt0+cnt1;i++)
    {
        arr[i]=1;
    }
    for(int i=0;i<cnt2;i++)
    {
        arr[i]=2;
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}