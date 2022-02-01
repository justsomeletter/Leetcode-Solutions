class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,target=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(count == 0){
                target = nums[i];
            }
            if(target == nums[i]){
                count++;
            }
            else count--;
        }
        return target;
    }
};