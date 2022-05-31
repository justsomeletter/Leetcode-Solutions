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
    ListNode *detectCycle(ListNode *head) {
        
        if(head == NULL or head->next == NULL) 
            return NULL;
        ListNode *temp=head;
        unordered_set<ListNode*> m;
        
        while(temp != NULL){
            if(m.find(temp) != m.end()) return temp;
            
            m.insert(temp);
            temp=temp->next;
        }
        return NULL;
    }
};