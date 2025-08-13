struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};
Node* insertHead(Node* head, int val)
{
    Node* temp=new Node(val,head);
    return temp;
}