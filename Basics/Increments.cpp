#include <iostream>
using namespace std;
int main(){
int x=18;
int y=x++;// x=18 is assigned to y then x is incremented. Only x is.
//x=19,y=18
int z=++x;//x=19 right? Now, x is incremented and then stored in z
//x=20 z=20
cout<<y;
cout<<z;
}