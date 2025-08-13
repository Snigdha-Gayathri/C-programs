#include<bits/stdc++.h>
using namespace std;
void meriVec(){
vector<int> v(5,100);//Vector declared and initialised
vector<int>::iterator it= v.begin();//An iterator that starts at the beginning

it++;//Incrementing iterator to move forward in the vector
//The iterator points to the address of the vector's index
// '*' accesses the value of the index's memory value
cout<<*(it)<<" "; //Display the value of the index
it=it+2;//Skipping every next element
cout<<*(it)<<" ";//Prints alternate elements
cout<<v[0]<<" "<<v.at(0);//Different syntax tow access elements by their index
cout<<v.back()<<" ";//The last element

vector<int>::iterator it1=v.end();//Points to the location right after the vector
vector<int>::iterator it2=v.rend();
/* The array is reversed 
Initially, {10,20,30,40}. After Reversing, {40,30,20,10}
Now, what is the ending element? It's 10. 
rend() points to the location right before 10
Matlab, it2{10,20,30,40}..Bas
it2-- will point to 10. Again --, points to 20*/
vector<int>::iterator it3=v.rbegin();
/* The array is reversed 
Initially, {10,20,30,40}. After Reversing, {40,30,20,10}
Now, what is the starting element? It's 40. 
rend() points to 40
it2++ points to 30 */

// for loop for vectors
for(vector<int>::iterator it=v.begin(); it!=v.end(); it++)
{
    cout<<*(it)<<" ";
}
for(auto it=v.begin(); it!=v.end();it++)//To simplify vector<int>::iterator
{
    cout<<*(it)<<" ";
}

// for-each loop for vectors
for(auto it:v)
{
    cout<<*(it)<<" ";
}

//Deletion of elements

//{10,20,30,40}
v.erase(v.begin()+1);//20 is deleted

v.erase(v.begin()+2, v.begin()+5);// v.erase(start,end)
/* Here, start is the starting index of the elements you wish 
to delete. end is the ext index of the last element you wish to delete
For you, [) okay ?
]*/
        //   1  2  3  4  5 --->begin()+what
/* Matlab, {10,20,30,40,50}
begin()+2 points to 30. begin()+5 points to 50
So, [). Matlab, 30 is included to delete
  ) is excluded. Matlab, upto 50,not 50. Are deleted.
  Phir, 30,40 delete hote hai
  Then, hamari vector-->{10,20,50}*/
}

//Inserting elements
vector<int> myVec(2,100);
myVec.insert(myVec.begin(),300)//vec.insert(where,what)
myVec.insert(myVec.begin()+1,2,10)//vec.insert(where,how many,what)

vector<int> copyVec(2,50);//to copy
myVec.insert(myVec.begin(),copyVec.begin(),copyVec.end());
//vec.insert(where, copy's start, copy's end)

//Size of the vector
cout<<myVec.size();

myVec.pop_back();//Pops the last element

//Swapping vectors
vector<int> vect1{10,20,30};
vector<int> vect2{40,50,60};
vect1.swap(vect2);
for(auto it=vect1.begin(); it!=v.end();it++)
{
    cout<<*(it)<<" ";
}//40,50,60
for(auto it=vect2.begin(); it!=v.end();it++)
{
    cout<<*(it)<<" ";
}//10,20,30


//Erases the entire vector
vect1.clear();
cout<<vect2.empty();//Returns true if empty and false if not
int main(){
    meriVec();
    return 0;
}