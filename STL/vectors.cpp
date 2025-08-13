#include<bits/stdc++.h>
using namespace std;
void myVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);//Faster

    vector<pair<int,int>> vec; //A pair is declared to a vector
    vec.push_back({1,2});
    vec.emplace_back(1,2);
    /* Note the difference in syntax. I we use emplace_back, no need
    to specift the pair in {}. But, push_back needs them.
    Also, if you initialise two values at once to emplace_back, it
    considers them a pair,so...*/

    vector<int> v1(5,100); //Vector of size 5 and values 100
    v1.push_back(1); /* Works by pushing 1 after the 5 100's even after 
    the size was declared */

    vector<int> v2(9);//Only declaration

    vector<int> v3(5,20);//Size 5 values 20

    vector<int> v4(v3);//Copy v3 to v4





}
int main(){
    myVector();
    return 0;
}