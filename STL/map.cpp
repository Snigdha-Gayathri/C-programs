#include<bits/stdc++.h>
using namespace std;
void myMap()
{
    map<int,int> m;
    map<int, pair<int,int>> m1;
    map<pair<int,int>, int> m2;
    m[1]=2;
    m.emplace({3,1});
    m.insert({2,4});//Stores in the increasing order of the keys
    m1[10]={1,2};//Pair assigned to a key
    m2[{2,3}]=10;//Value assigned to a paired-key

    for(auto it:m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<m[1];//Prints the value of the key=1
    cout<<m[5];//With no key 5, 0 or null is printed

    auto it=m.find(3);
    cout<<*(it).second();//Prints the value of key=3
}
int main(){
    
    return 0;
}
