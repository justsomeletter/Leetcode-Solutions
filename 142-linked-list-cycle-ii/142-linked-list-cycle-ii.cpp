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
    ListNode *detectCycle(ListNode *head) {
        
        bool ans=false;
        if(head == NULL or head->next == NULL) return NULL;
       ListNode *slow=head,*fast=head;
        
        while(fast->next != NULL and fast->next->next != NULL ){
            slow= slow->next;
            fast=fast->next->next;
            if(fast == slow) {
                ans=true;
                break;                
            }
        }
        if(!ans) return NULL;
        fast=head;
        while(fast != slow){
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
    }
};