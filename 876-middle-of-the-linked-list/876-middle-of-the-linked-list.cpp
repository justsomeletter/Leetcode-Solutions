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
    ListNode* middleNode(ListNode* head) {
        int len=0;
        ListNode *temp = head;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        
        len = len/2;
        temp=head;
        while(len){
            temp = temp->next;
            len--;
        }
        return temp;
    }
};