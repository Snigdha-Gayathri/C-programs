#include<bits/stdc++.h>
using namespace std;
class Teacher{
    private:
    double salary;

    public:

    Teacher()
    {
        cout<<"Mera naam constructor hai!"<<endl;
        dept="CSE";
    }
    string name;
    string dept;
    string subject;

    void setSalary(double s)
    {
        salary=s;
    }
    double getSalary()
    {
        return salary;
    }
    
//constructors are always declared public
}
int main(){
    Teacher t1;
    t1.name="Snigdha";
    t1.subject="Maths";
    
    t1.setSalary(90000);

    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
9
    return 0;
}