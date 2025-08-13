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
int lengthOfLL(Node* head)
{
    int cnt=0;
    Node* temp=head;
    while(temp)
    {
        temp=temp->next;
        cnt++;
    }
    return cnt;
}