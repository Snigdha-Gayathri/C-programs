#include<bits/stdc++.h>
using namespace std;
class Teahcer{
    private:
    double salary;

    public:
    //non-parameterised
    Teacher()
    {
        dept="CSE";
    }

    //parameterised
    Teacher(string n,string d,string s,double sal){
        name=n;
        dept=d;
        subject=s;
        salary=s;

        void getInfo()
        {
            cout<<name<<endl;
            cout<<salary<<endl;
        }
    }

    //copy constructor
    Teacher(const Teacher &other) {
        name = other.name;
        subject = other.subject;
        dept = other.dept;
        salary = other.salary; // Copy salary
    }
};
int main(){
    Teacher t1("Snigdha", "Maths", "CSE");
    t1.setSalary(900000);
    t1.getInfo();
    cout << "Salary: " << t1.getSalary() << endl;

    // Using the copy constructor
    Teacher t2 = t1; // This will invoke the copy constructor
    cout << "\nCopied Teacher Info:" << endl;
    t2.getInfo();
    cout << "Salary: " << t2.getSalary() << endl;


    return 0;
}