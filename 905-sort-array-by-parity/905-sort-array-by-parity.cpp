class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
    
        int size = nums.size();
        int pt=-1;
        for(int i=0;i<size;i++){
            if(nums[i]%2 == 0){
                pt++;
                swap(nums[i],nums[pt]);
            }
        }
        return nums;
    }
};