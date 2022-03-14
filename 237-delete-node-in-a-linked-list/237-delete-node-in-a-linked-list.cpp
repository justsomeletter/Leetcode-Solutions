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
    void deleteNode(ListNode* node) {
        ListNode *s=node,*e=node->next,*prev=NULL;
        while(e != NULL){
            s->val=e->val;
            prev=s;
            s=s->next;
            e=e->next;
        }
        prev->next=NULL;
        delete s;
    }
};