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
    int findHeight(TreeNode *root){
        
        if(root == NULL) return 0;
        
        int l = findHeight(root->left);
        int r = findHeight(root->right);
        
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        
        int lh = findHeight(root->left);
        int rh = findHeight(root->right);
        
        if(abs(lh-rh)>1) return false;
        
        bool l = isBalanced(root->left);
        bool r = isBalanced(root->right);
        
        if(l == false or r == false) return false;
        
        return true;
    }
};