class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int i=0;
        fun(nums,ans,temp,0);
        return ans;
    }
    void fun(vector<int> &nums,vector<vector<int>> &ans,vector<int> &temp,int i){
        ans.push_back(temp);
        for(int j=i;j<nums.size();++j){
            temp.push_back(nums[j]);
            fun(nums,ans,temp,j+1);
            temp.pop_back();
        }
    }
};