#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>fourSum(vector<int>&nums, int target)
{
    int n=nums.size();
    set<vector<int>>st;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            set<long long>hashset;
            for(int k=j+1;k<n;k++)
            {
                long long sum=nums[i]+nums[j];
                sum+=nums[k];
                long long fourth=(target-(sum));
                if(hashset.find(fourth)!=hashset.end())
                {
                    vector<int>temp={nums[i],nums[j],nums[k],(int)fourth};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);

                }
                hashset.insert(nums[k]);
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}
int main(){
    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<"Enter target: "<<endl;
    int target;
    cin>>target;
    vector<vector<int>> res = fourSum(nums,target);
    cout << "Quads that sum up to given target are: " << endl;
    for (const auto& quad : res) {
        cout << "[" << quad[0] << ", " << quad[1] << ", " << quad[2] << ", "<< quad[3]<< "]" << endl;
    }

    return 0;
}