class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp(nums.size());
        for(int i=0;i<nums.size();i++){
            temp[i] = nums[i];
        }
        
        int start=-1,end=-1;
        sort(temp.begin(),temp.end());
        
        for(int i=0;i<nums.size();i++){
            if(temp[i] != nums[i]){
                if(start == -1){
                    start=i;
                }
                else end=i;
            }
        }
        if(start == end) return 0;
        else return end-start +1;
    }
};