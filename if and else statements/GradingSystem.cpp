#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks";
    cin>>marks;
    if(marks<25)
    {
        cout<<"Grade F";
    }
    else if(marks<=44)
    {
        cout<<"Grade E";
    }
    else if(marks<=49)
    {
        cout<<"Grade D";
    }
    else if(marks<=59)
    {
        cout<<"Grade C";
    }
    else if(marks<=79)
    {
        cout<<"Grade B";
    }
    else if(marks<=100)
    {
        cout<<"Grade A";
    }
    return 0;
}