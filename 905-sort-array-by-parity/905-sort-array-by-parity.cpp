class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
    
        int size = nums.size();
        int s=0,e=size-1;
        while(s<e){
            if(nums[s]&1 == 1 and nums[e]%2 == 0){// swap both
                swap(nums[s],nums[e]);
                s++;
                e--;
            }
            else{
                 if(nums[s]%2 == 0) s++;// move ahead if element is even
                 if(nums[e]&1 == 1) e--;  // move behind if element is odd
            }
        }
        return nums;
    }
};