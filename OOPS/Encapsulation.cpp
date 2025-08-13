#include<bits/stdc++.h>
using namespace std;
class Teacher
{
    private:
    double salary;

    public:
    string name;
    string dept;
    string subject;
    

    void changeDept(string newDept)
    {
        dept=newDept;
    }

    void setSalary(double s)
    {
        salary=s;
    }
    double getSalary()
    {
        return salary;
    }
};

class Account
{
    private:
    double balance;
    string password;//data-hiding-->encapsulation

    public:
    string accountID;
    string username;
    

};
int main(){
    Teacher t1;
    t1.name="Snigdha";
    t1.subject="Maths";
    t1.dept="CSE";
    t1.salary=90000;
    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;


    return 0;
}