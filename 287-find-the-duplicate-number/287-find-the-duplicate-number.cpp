class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int fast = nums[0],slow = nums[0];
        
        do {// keep iterating till slow and fast are not equal
            fast = nums[nums[fast]];
            slow = nums[slow];
        }while(slow != fast);
        
        fast = nums[0];
        while(fast != slow){
            fast = nums[fast];
            slow = nums[slow];
        }
        return slow;
    }
};