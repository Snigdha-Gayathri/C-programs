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

// Function to convert array to linked list
Node* convertArr2LL(vector<int> &arr)
{
    if (arr.empty()) return nullptr;  // Handle empty vector case

    Node* head = new Node(arr[0]);    // First node
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);   // Create new node
        mover->next = temp;              // Link current node to next
        mover = temp;                    // Move the pointer forward
    }

    return head;
}

// Function to print linked list
void printLinkedList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};

    Node* head = convertArr2LL(arr);
    printLinkedList(head);

    return 0;
}
