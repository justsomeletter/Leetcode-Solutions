class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans={0};
        int size = nums.size(),temp=0;
        for(int i=0;i<size;i++){
            if(i ==0){
                temp = nums[i];
                ans.clear();
             }
            else temp=ans.back()+nums[i];
            ans.push_back(temp);
        }
        return ans;
    }
};