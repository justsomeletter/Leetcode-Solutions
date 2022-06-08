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
    
    vector<int> preorderTraversal(TreeNode* root) {
       vector<int> in;
        vector<int> pos;
        vector<int> pre;
        if(root == NULL) return pre;
        stack<pair<TreeNode*,int>> s;
        s.push({root,1});
        
        while(!s.empty()){
            pair<TreeNode*,int> temp = s.top();
            s.pop();
            
            if(temp.second == 1){
                pre.push_back((temp.first)->val);
                temp.second++;
                s.push(temp);
                
                if((temp.first)->left != NULL)
                    s.push({(temp.first)->left,1});
            }
            else if(temp.second == 2){
                in.push_back((temp.first)->val);
                temp.second++;
                s.push(temp);
                
                if((temp.first)->right != NULL)
                    s.push({(temp.first)->right,1});
            }
            else{
                pos.push_back((temp.first)->val);
            }
        }
        return pre;
    }
};