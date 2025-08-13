#include<bits/stdc++.h>
using namespace std;
int secondLargest(int arr[],int n)
{
    int largest=arr[0];
    int slargest=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest)
        {
            slargest=arr[i];
        }
    }
    return slargest;
}
int secondSmallest(int arr[],int n)
{
    int smallest=arr[0];
    int ssmallest=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<ssmallest)
        {
            ssmallest=arr[i];
        }
    }
    return ssmallest;

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
    cout<<"The second largest element is: "<<endl;
    int slar=secondLargest(arr,n);
    cout<<slar<<endl;
    cout<<"The second smallest element is: "<<endl;
    int ssmall=secondSmallest(arr,n);
    cout<<ssmall<<endl;
    return 0;
}