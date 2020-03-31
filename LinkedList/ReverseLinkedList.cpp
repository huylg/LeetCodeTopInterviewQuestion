/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == 0)
            return 0;
        ListNode* next=head->next;
        ListNode* current=head;
        current->next = 0;
        while(next!=0){
           ListNode* temp = next->next;
            next->next = current;
            current = next;
            next = temp;
        }
        return current;
    }
};
