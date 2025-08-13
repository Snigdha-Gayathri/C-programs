#include<bits/stdc++.h>
using namespace std;
void doSomething(int num)
{
    cout<<num<<endl;/*The COPY of the original value is taken as a
    parameter and is done operations on */ 
    num+=5;//Incrementing by 5
    cout<<num<<endl;
    num+=5;//Incrementing by 5 again
    cout<<num<<endl;
}
int main(){
    int num=18;
    doSomething(num);
    cout<<num<<endl;/* Since it is the COPY that is modified in the function
    defined and called, in the main function, the variable remains original
    and the initial value that was initialised without the function's claws
    on it is printed */
    return 0;
}