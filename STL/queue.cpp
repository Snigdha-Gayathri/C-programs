#include<bits/stdc++.h>
using namespace std;
void myQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    q.back()+=5;//5 is added to the last element--> 3+5=8
    cout<<q.back();//8 is printed
    cout<<q.front();//1 is printed

    q.pop();//1 is popped
    
}
int main(){
    
    return 0;
}