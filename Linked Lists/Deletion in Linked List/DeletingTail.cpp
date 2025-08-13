struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};
Node* deleteTail(Node* head)
{
    if(head== nullptr || head->next==nullptr)
    {
        return nullptr;
    }
    Node* temp=head;
    while(temp->next->next!=nullptr)
    {
        temp=temp->next;
        
    }
    free(temp->next);
    temp->next=nullptr;
}