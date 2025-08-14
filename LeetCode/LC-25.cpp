#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Solution class
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;
        // Count the total number of nodes
        int count = 0;
        ListNode* cur = head;
        while (cur) {
            count++;
            cur = cur->next;
        }

        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;

        // Process in chunks of k
        while (count >= k) {
            cur = prev->next;
            ListNode* nextNode = cur->next;
            // Reverse k nodes within the current group
            for (int i = 1; i < k; i++) {
                cur->next = nextNode->next;
                nextNode->next = prev->next;
                prev->next = nextNode;
                nextNode = cur->next;
            }
            
            // Move prev to end of reversed segment
            prev = cur;
            count -= k;
        }

        return dummy.next;
    }
};

// Helper to print list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << "->";
        head = head->next;
    }
    cout << endl;
}

// Example main
int main() {
    // Building example list: 1->2->3->4->5
    ListNode* head = new ListNode(1);
    ListNode* cur = head;
    for (int i = 2; i <= 5; i++) {
        cur->next = new ListNode(i);
        cur = cur->next;
    }

    int k = 2;
    cout << "Original list: ";
    printList(head);

    Solution sol;
    ListNode* result = sol.reverseKGroup(head, k);

    cout << "After reversing in groups of " << k << ": ";
    printList(result);

    return 0;
}
