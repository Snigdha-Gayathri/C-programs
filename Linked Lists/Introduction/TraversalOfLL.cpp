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

int main(Node* head)
{
    Node* temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}