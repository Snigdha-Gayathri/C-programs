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
    cout<<"Enter the XOR value: "<<endl;
    int k;
    cin>>k;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int xo=0;
        for(int j=1;j<n;j++)
        {
            xo=xo^arr[j];
            if(xo==k)
            {
                cnt++;
            }
        }

    }
    cout<<cnt;
    return 0;
}