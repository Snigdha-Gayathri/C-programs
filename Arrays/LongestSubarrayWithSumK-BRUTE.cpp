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
    cout<<"Enter the sum of the subarray: "<<endl;
    int k;
    cin>>k;
    int longestlen=0;
    int s=0;
    int len;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<j;k++)
            {
                s+=arr[k];
                len=j-i+1;
                if(s==k)
                {
                    longestlen=max(len,j-i+1);
                }

            }
        }
    }
    cout<<longestlen;
    return 0;
}