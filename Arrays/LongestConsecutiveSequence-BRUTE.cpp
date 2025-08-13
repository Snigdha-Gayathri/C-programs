#include<bits/stdc++.h>
using namespace std;
bool ls(arr,num)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            return true;
        }
        return false;
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
    cout<<"Enter the number whose longest sequence is to be found: "<<endl;
    int num;
    cin>>num;
    int longest=1;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int x=arr[i];
        cnt=1;
        while(ls(arr,x+1)==true)
        {
            x=x+1;
            cnt=cnt+1;
        }
    }
    return 0;
}