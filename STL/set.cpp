#include<bits/stdc++.h>
using namespace std;
//Sorted in ascending order and takes unique values
void mySet()
{
    set<int>st;
    st.insert(1);//-->{1}
    st.insert(120);//-->{1,120}
    st.insert(3);//-->{1,3,120}
    st.emplace(76);//-->{1,3,76,120}

    auto it= st.find(3);
    st.erase(76);

    int count=st.count(18);//If present, count is 1 , else, 0

    auto it1=st.find(3);
    st.erase(it1);

    auto it2=st.find(2);
    auto it3=st.find(1);
    st.erase(it2,it3);
}

int main(){
    
    return 0;
}