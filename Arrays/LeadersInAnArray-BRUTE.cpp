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
    for(int i=0;i<n;i++)
    {
        bool leader=true;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                leader=false;
                break;
            }
        }
        if(leader==true) ans.push_back(arr[i]);
    }
    
    
    for(int i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}