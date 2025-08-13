#include<bits/stdc++.h>
using namespace std;
void SquaringEles(vector<int>arr)
{
    vector<int>result;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        result.push_back(arr[i]*arr[i]);
    }
    for(auto it=result.begin(); it!=result.end();it++)
    {

    cout<<*(it)<<" ";
    }

}
int main(){
    cout<<"Enter the size of the array: "<<endl;
    vector<int>arr;
    cout<<"Enter the elements of the array: "<<endl;
    for(auto it=arr.begin(); it!=arr.end();it++)
    {
      cin>>*(it)>>" ";
    }
    SquaringEles(arr);
    

    return 0;
}