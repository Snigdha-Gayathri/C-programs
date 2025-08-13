#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter the elements of the array: "<<endl;
    for(int i:nums)
    {
        cin>>i;
    }
    if(n==0) return 0;
    sort(nums.begin(),nums.end());
    int longest=1;
    int cntCurr=0, lastSmaller=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(nums[i]-1==lastSmaller)
        {
            cntCurr+=1;
            lastSmaller=nums[i];
        }
        else if(nums[i]!=lastSmaller)
        {
            cntCurr=1;
            lastSmaller=nums[i];
        }
        longest=max(longest,cntCurr);
    }
    cout<<longest<<endl;

    return 0;
}