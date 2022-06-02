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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1 = headA, *temp2 = headB;
        
        //size of LL A
        int sza=0;
        while(temp1 != NULL){
            sza++;
            temp1=temp1->next;
        }
        
        //size of LL-B
        int szb=0;
        while(temp2 != NULL){
            szb++;
            temp2 = temp2->next;
        }
        
        int diff = abs(sza-szb);
        if(sza>szb){
            while(diff){
                headA=headA->next;
                diff--;
            }
        }
        else{
            while(diff){
                headB = headB->next;
                diff--;
            }
        }
        
        while(headA != NULL){
            if(headA == headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};