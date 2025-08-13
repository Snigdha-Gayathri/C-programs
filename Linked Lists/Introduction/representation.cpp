#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

int main() {
    Node x = Node(2, nullptr);     // Creating a Node on stack
    Node* y = &x;                  // y points to x

    Node* z = new Node(2, nullptr); // Creating a Node on heap

    // Optional: Print to verify
    cout << "x.data: " << x.data << endl;
    cout << "y->data: " << y->data << endl;
    cout << "z->data: " << z->data << endl;

    delete z; // Free dynamically allocated memory
    return 0;
}
