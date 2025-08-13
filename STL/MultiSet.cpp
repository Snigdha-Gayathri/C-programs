#include<bits/stdc++.h>
using namespace std;
void myMultiSet()
{
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.erase(1);//Both 1's are erased

    int count=ms.count(2);
    ms.erase(ms.find(1));//Single 1 is erased
    ms.erase(ms.find(1),ms.find(1)+2);//Erases next 1 also
}
int main(){
    
    return 0;
}