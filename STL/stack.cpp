#include<bits/stdc++.h>
using namespace std;
void myStack()
{
    stack<int> st;
    st.push(1); //-->{1}
    st.push(2); //-->{2,1}
    st.push(3); //-->{3,2,1}
    st.push(4); //-->{4,3,2,1}
    st.emplace(5); //-->{5,4,3,2,1}

    cout<<st.top();//Prints the last element pushed
    st.pop();//Pops the element at the top of the stack
    cout<<st.size();
    cout<<st.empty();//Returns boolean

    //Swapping stacks
    stack<int>st1,st2;
    st1.swap(st2);
}
int main(){
    
    return 0;
}