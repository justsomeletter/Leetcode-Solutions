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
        
        if(size== n) return head->next;
        
        int pos=size-n;
        
        ListNode *prev=head;
        while(--pos){
            prev=prev->next;
        }
        ListNode *del=prev->next,*curr=prev->next->next;
        if(curr ==NULL){
            prev->next=NULL;
        }
        else{
            prev->next=curr;
        }
        delete del;
        return head;
    }
};