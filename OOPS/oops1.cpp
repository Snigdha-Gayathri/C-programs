#include<bits/stdc++.h>
using namespace std;
class Teacher
{
    public:
    string name;
    string dept;
    string subject;
    double salary;

    void changeDept(string newDept)
    {
        dept=newDept;
    }

};
int main(){
    Teacher t1;
    t1.name="Snig";
    t1.dept="CSE";
    t1.subject="Maths";
    t1.salary=50000;
    cout<<t1.name<<endl;
    return 0;
}