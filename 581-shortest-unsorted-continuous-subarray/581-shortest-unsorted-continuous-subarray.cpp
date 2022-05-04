class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        int start=-1,end=-1,size=nums.size();
        int cur_max = nums[0];
        int cur_min = nums[size-1];
        
        // find the starting index from the starting 
        for(int i=size-2;i>=0;i--){
            if(nums[i] > cur_min){
                //order disrupted here
                start=i;
            }
            cur_min = min(cur_min,nums[i]); // keep track of minimum value in               //arr(i to n)
        }
        
        // find the ending index of the subarray
        for(int i=1;i<size;i++){
            if(nums[i]<cur_max){
                //order is disrupted here 6 < 2
                end=i+1;
            }
            cur_max = max(cur_max,nums[i]);
        }
        return end-start;
    }
};