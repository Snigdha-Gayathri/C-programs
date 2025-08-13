#include<bits/stdc++.h>
using namespace std;
bool sortedOrNot(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1]){}
        else{
            return false;
        }
    }
    //After every iteration is checked, only then true will be printed
    return true;
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
    bool res=sortedOrNot(arr,n);
    cout<<res<<endl;
    
    return 0;
}