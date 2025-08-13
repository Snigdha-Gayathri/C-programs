#include<bits/stdc++.h>
using namespace std;
//Largest string stays at the top
priority_queue<int> pq;
pq.push(1);//-->{1}
pq.push(2);//-->{2,1}
pq.push(3);//-->{3,2,1}
pq.emplace(10);//-->{10,3,2,1}

cout<<pq.top();//prints 10

pq.pop();//pops 10

//Minimum heap
priority_queue<int, vector<int>, greater<int>> pq1;
pq.push(5);
pq.push(2);
pq.push(8);
pq.emplace(10);
cout<<pq.top();//This time, prints 2 --> the least element

int main(){
    
    return 0;
}