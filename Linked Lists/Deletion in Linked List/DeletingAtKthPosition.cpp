struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};
Node* deleteK(Node* head, int k)
{
    if(head==nullptr) return head;
    if(k==1)
    {
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int cnt=0;
    Node* temp=head;
    Node* prev=nullptr;
    while(temp!=null)
    {
        cnt++;
        if(cnt==k)
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