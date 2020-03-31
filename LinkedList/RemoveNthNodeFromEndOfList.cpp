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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first = head;
        ListNode* second = head;

        
        for(int i=0;i<n;i++){
            if(first==0)
                return head;
            first = (first!=0)?first->next:0;
        }
     
        
        while(first!=0){
            first = first->next;
            second = second->next;
        }
        
        if(second==head){
            head = second->next;
        }else{
            second->val = second->next->val;
            second->next = second->next->next;

        }
        return head;
    }
};
