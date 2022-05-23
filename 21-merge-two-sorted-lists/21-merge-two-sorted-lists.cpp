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
        if(list1 == NULL) return list2;
        
        if(list2 == NULL) return list1;
        
        ListNode *head = NULL,*tail = NULL;
        
        while(list1 != NULL and list2 != NULL){
            
            //creating new node
            ListNode *new_node = new ListNode();
            
            //to connect the nodes of the linked list
            if(tail != NULL){
                tail->next = new_node;
            }
            
            if(list1->val > list2->val){
                new_node->val = list2->val;
                list2 = list2->next;
            }
            else{
               new_node->val = list1->val;
                list1 = list1->next; 
            }
            
            //when first node of final linked list is made
            if(head == NULL){
                head = new_node;
                tail = head;
            }
            
            // to keep track of last node in the newly created linked list
            tail = new_node;
        }
        
         if(list2 != NULL)
            tail->next = list2;
        else if(list1 != NULL)
            tail->next = list1;   
        
        return head;
    }
};