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
    int largest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    int slargest=-1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>slargest && arr[i]!=largest)
        {
            slargest=arr[i];
        }
    }
    cout<<slargest<<endl;
    
    return 0;
}