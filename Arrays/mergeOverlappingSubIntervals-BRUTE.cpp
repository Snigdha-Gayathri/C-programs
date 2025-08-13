#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>mergeOverlappingSubIntervals(vector<vector<int>>&arr)
    {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        for(int i=0;i<n;i++)
        {
            int start=arr[i][0];
            int end=arr[i][i];
            if(!ans.empty() && end<=ans.back()[i]){
                continue;
            }
            for(int j=i+1;j<n;j++)
            {
                if(arr[j][0]<=end)
                {
                    end=max(end,arr[j][i]);
                }
                else{
                    break;
                }
            }
            ans.push_back((start,end));
        }
        return ans;
    }
    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    vector<vector<int>> arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    return 0;
}