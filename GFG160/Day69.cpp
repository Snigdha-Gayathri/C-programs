class Solution {
  public:
    Node* reverse(Node* head)
    {
        Node* prev=NULL;
        Node* curr=head;
        while(curr!=NULL)
        {
            Node* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    
    Node* removeLeadingZeros(Node* head)
    {
        while(head!=NULL && head->data==0)
        {
            head=head->next;
        }
        return head? head:new Node(0);
    }
    
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        num1=removeLeadingZeros(num1);
        num2=removeLeadingZeros(num2);
        
        num1=reverse(num1);
        num2=reverse(num2);
        
        Node* dummy=new Node(0);
        Node* temp=dummy;
        int carry=0;
        
        while(num1 !=NULL || num2!=NULL || carry!=0)
        {
            int sum=carry;
            if(num1)
            {
                sum+=num1->data;
                num1=num1->next;
            }
            if(num2)
            {
                sum+=num2->data;
                num2=num2->next;
            }
            carry=sum/10;
            temp->next=new Node(sum%10);
            temp=temp->next;
        }
        Node* result=reverse(dummy->next);
        result=removeLeadingZeros(result);
        return result;
        
    }
};