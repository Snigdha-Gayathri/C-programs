#include<bits/stdc++.h>
using namespace std;
class Teacher{
    private:
    double salary;

    public:
    string name;
    string subject;
    string dept;

    Teacher(string name,string subject,string dept)
    {
        this->name=name;
        this->subject=subject;
        this->dept=dept;
        
    }

    void getInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Department: "<<dept<<endl;
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
int main(){
    Teacher t1("Snigdha","Maths","CSE");
    t1.getInfo();
    t1.setSalary(900000);
    double sal=t1.getSalary();
    cout<<sal<<endl;
    return 0;
}