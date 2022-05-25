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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *curr=head->next, *ans=head, *prev=NULL;
        int sum=0;
        
        while(curr != NULL){
            
            if(curr -> val == 0){
                ans->val = sum;
                prev=ans;
                 ans=ans->next;
                sum=0;
            }
            else sum += curr->val;
            
            curr = curr->next;
        }
        
        prev->next = NULL;
        delete ans;
        return head;
    }
};