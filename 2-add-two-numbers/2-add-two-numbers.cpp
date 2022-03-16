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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //initialisation
        ListNode *head = NULL,*tail=NULL;
        int carry=0,num1,num2;
        while(l1 != NULL or l2 != NULL or carry!=0){
            if(l1 != NULL){
                num1 = l1->val;
                l1=l1->next;
            }   
            else 
                num1=0;
            if(l2 != NULL){
                num2 = l2->val; 
                l2=l2->next;
            }
            else 
                num2 = 0;
            int sum=num1+num2+carry;
            if(sum>=10){
                sum=sum%10;
                carry=1;
            }
            else carry=0;
            ListNode *temp= new ListNode(sum);
            if(head == NULL){
                head=temp;
                tail=temp;
            }
            else{
                tail->next=temp;
                tail=temp;
            }
            
        }
        return head;
    }
};