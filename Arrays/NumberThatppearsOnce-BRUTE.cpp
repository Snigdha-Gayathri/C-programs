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
    int num;
    int cnt=0;
    int req_num;
    for(int i=0;i<n;i++)
    {
       num=arr[i];
       cnt=0;
       for(int j=0;j<n;j++)
       {
        if(arr[j]==num)
        {
            cnt++;
        }

       }  
       if(cnt==1) 
       {
         req_num=num;
       }
    }
    cout<<req_num;
    return 0;
}