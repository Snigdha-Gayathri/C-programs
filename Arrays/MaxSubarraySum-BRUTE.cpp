#include<bits/stdc++.h>
using namespace std;
long long maxSubArraySum(int arr[],int n)
{
    long long sum=0;
    long long maxi=LONG_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>maxi)
        {
            maxi=sum;
        }
        if(sum<0)
        {
            sum=0;
        }
        if(maxi<0)
        {
            maxi=0;
        }
        return 0;
    }
}

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
    long long res=maxSubArraySum(arr,n);
    return 0;
}