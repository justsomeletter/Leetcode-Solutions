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
    int getDecimalValue(ListNode* head) {
        ListNode *temp=head;
        int ans=0,size=0;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        int p=size-1;
        temp=head;
        while(size and temp!=NULL){
            int data=temp->val;
            if(data)
                ans += pow(2,p);
            
            p--;
            size--;
            temp=temp->next;
        }
        return ans;
    }
};