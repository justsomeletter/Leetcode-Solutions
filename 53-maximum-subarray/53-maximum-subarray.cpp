class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int ans = INT_MIN, cs=0,size = nums.size(),temp=INT_MAX;
        if(size ==1){
            return nums[0];
        }
        else{
            for(int i=0;i<size;i++){
                cs += nums[i];
                ans = max(ans,cs);
                if(cs<0){
                    cs = 0;
                }
               
            }

            return ans;
        }
    }
};