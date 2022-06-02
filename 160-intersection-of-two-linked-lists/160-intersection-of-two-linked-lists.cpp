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
        if(headA == headB) return headA;
        ListNode *temp1 = headA, *temp2 = headB;
        while(temp1 != NULL){
            
            while(temp2 != NULL){
                if(temp1 == temp2 and temp1 != NULL){
                    return temp1;
                }
                temp2 = temp2->next;
            }
            temp1 = temp1->next;
            temp2=headB;
        }
        return NULL;
    }
};