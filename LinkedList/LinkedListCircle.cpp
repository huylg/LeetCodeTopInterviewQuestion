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
    bool hasCycle(ListNode *head) {
        if(head==0)
            return false;
        ListNode* temp = new ListNode(-1);
        ListNode* current = head;
        while(current->next != 0){
            ListNode* next = current -> next;
            current -> next = temp;
            current = next;
        }
        return current == temp;
    }
};
