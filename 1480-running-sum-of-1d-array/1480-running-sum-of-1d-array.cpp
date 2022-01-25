class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size(),temp=0;
        for(int i=0;i<size;i++){
            if(i ==0){
              ans.push_back(nums[i]);
            }
            else{ 
              temp = ans.back()+nums[i];
              ans.push_back(temp);
            }
        }
        return ans;
    }
};