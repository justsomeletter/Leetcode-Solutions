class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int j=0;
        vector<int> ans(2*n);
        for(int i=0;i<2*n-1;i=i+2){
            ans[i] = nums[j];
            ans[i+1] = nums[n+j];
            j++;
        }
        return ans;
    }
};