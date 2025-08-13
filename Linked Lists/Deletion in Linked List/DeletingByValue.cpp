struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};
Node* removeVal(Node* head, int el)
{
    if(head==nullptr) return head;
    if(head->data==el)
    {
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    Node* temp=head;
    Node* prev=nullptr;
    while(temp!=nullptr)
    {
        if(temp->data==el)
        {
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}