class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size(),ans=-1;
        sort(nums.begin(),nums.end());
        int n = size/2;
        for(int i=0;i<=n;i++){
            if(nums[i] == nums[n+i]){
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};