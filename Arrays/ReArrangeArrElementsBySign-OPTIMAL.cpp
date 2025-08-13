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
    vector<int>ans(n,0);
    int posIndex=0,negIndex=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            ans[negIndex]=arr[i];
            negIndex+=2;
        }
        else{
            ans[posIndex]=arr[i];
            posIndex+=2;
        }
    }
    for(auto it=ans.begin(); it!=ans.end();it++)
    {
      cout<<*(it)<<" ";
    }
    return 0;
}