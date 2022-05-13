class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        sub(0,temp,ans,nums,nums.size());//function call to recursive function
        return ans;
    }
    
    void sub(int ind,vector<int> &temp,vector<vector<int>> &ans, vector<int> &nums,int n){
        
        //base case
        if(ind >= n){
            ans.push_back(temp);
            return ;
        }
        
        // taking the nums[ind]
        temp.push_back(nums[ind]);
        sub(ind+1,temp,ans,nums,n);
        temp.pop_back();
            
        // not taking the nums[ind]
          sub(ind+1,temp,ans,nums,n);
    }
};