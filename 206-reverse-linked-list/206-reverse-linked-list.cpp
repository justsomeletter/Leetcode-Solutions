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
    ListNode* reverseList(ListNode* head) {
        //if there are only 0 or 1 node simple return the head itself
        if(head == NULL or head->next == NULL) return head;
        
        ListNode *prev=NULL, *curr=head, *fast=head->next;
        
        while(curr != fast){
            
            //updation of value
            prev = curr;
            curr = fast;
            
            // only update fast till it reaches last node
            if(fast->next != NULL) fast=fast->next;
            
            //making new links
            curr->next = prev;
            
            //After reversing head becomes last node & should point to NULL.                        //This case will run only for one time
            if(prev == head) prev->next = NULL;
        }
        head = curr;
        return head;
    }
};