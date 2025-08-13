#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>ans;

    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>maxi)
        {
            ans.push_back(arr[i]);
        }
        maxi=max(maxi,arr[i]);
    }
    sort(ans.begin(),ans.end());
    for(int i:ans)
    {
        cout<<i<<" ";
    }

    return 0;
}