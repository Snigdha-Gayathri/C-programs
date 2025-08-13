#include<bits/stdc++.h>
using namespace std;
void doSomething(string &s){/* The symbol '&' brings the 
reference of the variable as a paramter, not just the value, hence it
is original*/
    s[0]='A';
    cout<<s<<endl;
}
int main(){
    string s="Snig";
    doSomething(s);
    cout<<s<<endl;/*Since the original value is parametarised to the
    fucntion, it has been modified. Hence, even in the main function,
    the modified version is printed.*/
    return 0;
}