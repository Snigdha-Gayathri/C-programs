#include <iostream>
#include <vector>  
using namespace std;

struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

int checkIfPresent(Node* head, int val)
{
    Node* temp=head;
    while(temp)
    {
        if(temp->data==val) return 1;
        temp=temp->next;
    }
    return 0;
}
int main()
{
    Node* y;
    Node* z;
    Node* x = new Node(2,y );
    y= new Node(3,z);
    z= new Node(7,nullptr);

    cout<<checkIfPresent(x,7)<<" ";
}
