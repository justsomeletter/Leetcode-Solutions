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
    int pairSum(ListNode* head) {
        ListNode *prev=NULL,*temp=head;
        while(temp != NULL){
            ListNode *new_node = new ListNode(temp->val);
            if(prev != NULL)
                new_node->next=prev;
            prev=new_node;
            temp=temp->next;
        }
        
        ListNode *slow=head, *fast=head;
        int sum=slow->val+prev->val;
        while(fast->next!= NULL and fast ->next->next != NULL){
            
            int temp= prev->val + slow->val;
            sum = max(temp,sum);
            
            
            fast=fast->next->next;
            slow=slow->next;
            prev=prev->next;
        }
        sum = max((slow->val+prev->val),sum);
        return sum;
    }
};