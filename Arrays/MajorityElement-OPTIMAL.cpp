#include<bits/stdc++.h>
using namespace std;
int majorityEle(vector<int> v)
{
    int cnt=0;
    int n=v.size();
    int el;
    for(int i=0;i<n;i++)
    {
        if(cnt==0)
        {
            cnt=1;
            el=v[i];
        }
        else if(v[i]==el)
        {
            cnt++;
        }
        else{
            cnt--;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==el)
            {
                count=0;
            }
            if(count>n/2)
            {
                return el;
            }
            
        }
       
    }

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
    int res=majorityEle(v);
    cout<<res<<endl;
    return 0;

}