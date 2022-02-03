class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int minPos=INT_MAX;
        vector<int> ans(2,-1);
        int s=0,e=nums.size()-1;
        bool foundMin=false;
        while(s<=e){
            int m = s +(e-s)/2; // To avoid overflow
            if(nums[m]< target) s=m+1;
            else if(nums[m]>target) e=m-1;
            else{
                minPos=min(minPos,m);
                e=m-1;
                foundMin=true;
            }
        }
        if(!foundMin) return ans;
        
        s=minPos,e=nums.size()-1;
        bool foundMax=false;
        int maxPos=INT_MIN;
        while(s<=e){
            int m = s +(e-s)/2; // To avoid overflow
            if(nums[m]< target) s=m+1;
            else if(nums[m]>target) e=m-1;
            else{
                maxPos=max(maxPos,m);
                s=m+1;
                foundMax=true;
            }
        }
        
        if(foundMin) ans[0] = minPos;
        if(foundMax) ans[1] = maxPos;
        return ans;
    }
};