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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head = NULL,*tail = NULL;
        while(list1 != NULL and list2 != NULL){
            ListNode *new_node = new ListNode();
            if(tail != NULL) tail->next = new_node;
            if(list1->val > list2->val){
                new_node->val = list2->val;
                list2 = list2->next;
            }
            else{
               new_node->val = list1->val;
                list1 = list1->next; 
            }
            if(head == NULL){
                head = new_node;
                tail = head;
            }
            tail = new_node;
        }
        //if atleast one of them was empty
        if(head == NULL){
             if(list1 == NULL) head = list2;
            else if(list2 == NULL) head = list1;
        }
        
        //if List1 becomes empty
        else{
         if(list2 != NULL)
            tail->next = list2;
        else if(list1 != NULL)
            tail->next = list1;   
        }
        
        return head;
    }
};