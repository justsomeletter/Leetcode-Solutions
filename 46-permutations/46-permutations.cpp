class Solution {
public:

    void perm2(int ind,vector<int> &nums, vector<vector<int>> &ans){
        //base condition
        if(ind == nums.size()){
             ans.push_back(nums);  
            return ;
        }      
        
        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            
           perm2(ind+1,nums,ans);
           
            swap(nums[ind],nums[i]);
        }   
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        perm2(0,nums,ans);
        
        return ans;
    }
};