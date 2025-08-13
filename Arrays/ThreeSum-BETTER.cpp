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
    set<vector<int>>st;
    for(int i=0;i<n;i++)
    {
        set<int>hashset;
        for(int j=i+1;j<n;j++)
        {
            int third=-(arr[i]+arr[j]);
            if(hashset.find(third)!=hashset.end())
            {
                vector<int>temp={arr[i],arr[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }
    }
    for(auto it:st)
    {
        cout<<it<<" "<<endl;
    }
    return 0;
}