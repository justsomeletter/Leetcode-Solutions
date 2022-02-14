class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int temp=0;
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(nums[i] != temp){
                return temp;
            }
            temp++;
        }
        return temp;
    }
};