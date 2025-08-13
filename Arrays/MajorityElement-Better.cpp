#include<bits/stdc++.h>
using namespace std;
int majority(vector<int>v)
{
    map<int,int>mpp;
    for(int i=0;i<v.size();i++)
    {
        mpp[v[i]]++;

    }
    for(auto it:mpp)
    {
        if(it.second>(v.size()/2))
        {
            return it.first;
        }
    }
    return -1;
}
int main(){
    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements of the array: "<<endl;
    int num;
    for (int i = 0; i < n; i++)
    { 
     cin >> num;
     v.push_back(num);
    }
    int res=majority(v);
    cout<<res<<endl;
    return 0;

}