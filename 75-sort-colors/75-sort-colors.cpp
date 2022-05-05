class Solution {
public:
    void sortColors(vector<int>& nums) {

        int low=0,high=nums.size()-1,mid=0;
        // Dutch national flag algorithm
        while(mid<=high){
            switch(nums[mid]){
                case 0: swap(nums[mid],nums[low]);
                        mid++;
                        low++;
                        break;
                case 1: mid++;
                        break;
                case 2: swap(nums[mid],nums[high]);
                        high--;
                        break;
            }
        }
    }
};