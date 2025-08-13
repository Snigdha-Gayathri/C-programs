#include<bits/stdc++.h>
#include <utility> 
using namespace std;
void myPair()
{
    pair<int,int> p={18,45};
    cout<< p.first<<" "<<p.second<<endl;
    pair<int,int>arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].second<<endl;
    pair<int, pair<int, int>> my_men={33,{18,45}};//18 45 33
    cout<<my_men.second.first<<" "<<my_men.second.second<<" "<<my_men.first<<endl;

    
}
int main(){
    myPair();
    return 0;
}