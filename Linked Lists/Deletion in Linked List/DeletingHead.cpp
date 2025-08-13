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
Node* deleteHead(Node* head)
{
    if(head==NULL)
    {
        return head;
    }
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}