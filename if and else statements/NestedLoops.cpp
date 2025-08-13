#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;
    if(age<18)
    {
        cout<<"Ineligible";
    }
    else if(age<=54)
    {
        cout<<"Eligible";
    }

else if(age<=57)
{
    cout<<"Eligible but retires soon";

}
else {
    cout<<"Retirement time";
}
   return 0;
}