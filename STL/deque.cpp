#include<bits/stdc++.h>
using namespace std;
void myDeque()
{
    deque<int> dq;
    dq.push_back(1);//1 is pushed into the deque
    dq.emplace_back(2);//2 is pushed
    dq.push_back(18);
    dq.push_back(11);
    //-->{1,2,18,11}
    dq.push_front(3);//{3,1,2,18,11}
    dq.pop_back();//Last element is popped
    //-->{3,1,2,1,18}
    dq.pop_front();//First element is popped
    //-->{1,2,1,18}

    dq.back();//Last element is printed-->18
    dq.front();//First element is printed-->1
}
int main(){
    
    return 0;
}