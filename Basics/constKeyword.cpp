#include <iostream>
using namespace std;
int main(){
  const double pi=3.14;
  int radius=7;
  //pi=7-->Throws an error
  double area=pi*radius*radius;
  cout<<area;
}