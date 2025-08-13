#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a Fahrenheit value: " <<endl ;
    double fahrenheit;
    cin>>fahrenheit;
    /* multi
        line
        comments in C++
    */
    double celsius;
    celsius=(fahrenheit-32)/(1.8);
    cout<<"The Celsius value is: " << celsius;
    return 0;
}