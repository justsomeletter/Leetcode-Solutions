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
    
    bool ans(vector<int> &v){
        int n=v.size();
        int s=0,e=n-1;
        while(s<=e){
            if(v[e] != v[s]) return false;
            s++;
            e--;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        
        if(head->next == NULL) return true;
        ListNode *temp=head;
        vector<int> v;
        while(temp != NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        return ans(v);
    }
};