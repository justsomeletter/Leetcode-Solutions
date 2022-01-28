class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pnums[nums.size()];
        pnums[0] = nums[0];
        int ans=INT_MAX;
        for(int i=1;i<nums.size();i++){ // Making a prefix array
            pnums[i] = pnums[i-1]+nums[i];
        }
        for(int i=0;i<nums.size();i++){
            int leftSum = pnums[i]-nums[i];
            int rightSum = pnums[nums.size()-1]-pnums[i];
            if(leftSum == rightSum){
                ans = min(ans,i);
                return ans;
            }
        }
         return -1;
        
    }
};