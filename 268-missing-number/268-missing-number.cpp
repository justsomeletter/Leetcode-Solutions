class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size=nums.size(),i=0;
        for(i=0;i<size;i++){
            if(nums[i] != i){
                return i;
            }
        }
        return i;
    }
};