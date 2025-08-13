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
    return 0;
    int cnt=0;
    int res;
    for(int i=0;i<n;i++)
    {
        cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                cnt++;
            }
        }
        if(cnt>n/2)
        {
            res= arr[i];
        }
    }
    cout<<res<<endl;
    return -1;
}