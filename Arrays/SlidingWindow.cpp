#include<bits/stdc++.h>
#include<bits/math.h>
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
    cout<<"Enter the size of thee subarray: "<<endl;
    int k;
    cin>>k;int csum=0;
    int msum=INT_MIN;
    for(int i=0;i<n-k;i++)
    {
        for(int j=i;j<;j++)
        {
            csum=csum+arr[j];
        }

    }
    msum=Math.max(csum,msum);
    cout<<msum<<endl;
    return 0;
}