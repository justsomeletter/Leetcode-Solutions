/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        
        if(root == NULL){
            return ans;
        }
        
        stack<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode *temp = q.top();
            q.pop();
            
            if(temp->left) 
                q.push(temp->left);
            if(temp->right) 
                q.push(temp->right);
            
            ans.push_back(temp->val);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};