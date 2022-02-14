class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int temp=0,sum=0;
        for(int i=0;i<=n;i++){
            temp = temp^i;
            if(i<n)
                sum = sum^nums[i];
        }
        return temp^sum;
    }
};