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


    vector<int> temp[];
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp.add(arr[i]);
        }
    }
    int p=temp.size();
    for(int i=0;i<p;i++)
    {
        arr[i]=temp[i];
    }
    int nz=temp.size();
    for(int i=nz;i<n;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}