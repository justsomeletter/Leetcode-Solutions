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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        int size=0;
        while(temp!=NULL){
            temp=temp->next;
            size++;
        }
        
        int pos = size-n+1;
        if(pos == 1) return head->next;
        //if(pos == size)
        ListNode *curr=head,*prev=NULL,*end=NULL;
        while(--pos){
            prev=curr;
            curr=curr->next;
        }
        if(prev==NULL or curr ==NULL) return NULL;
        if(curr->next == NULL){
            prev->next=NULL;
            delete curr;
        }
        else{
            prev->next=curr->next;
            delete curr;
        }
       // if(head->next == NULL) return NULL;
        return head;
    }
};