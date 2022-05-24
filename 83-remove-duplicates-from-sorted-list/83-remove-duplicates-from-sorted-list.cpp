/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        //if LL has 0 or 1 element simply return it.
        if(head == NULL or head->next == NULL) return head;
        
        ListNode *curr=head->next, *prev= head;
        while(curr != NULL){
            if(curr->val == prev->val){
                prev->next=curr->next;
                ListNode *temp = curr;
                curr = curr->next;
                delete temp;
            }
            else{
                prev=prev->next;
                curr=curr->next;
            }
        }
        return head;
    }
};