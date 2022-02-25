class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int start=0,end=nums.size()-1;
        int mPos=100;
        bool cond=false;
        while(start<=end){
            int mid = end + (start-end)/2;
            if(nums[mid] == target){
                mPos = min(mid,mPos);
                end=mid-1;
                cond=true;
            }
            else if(nums[mid]>target)
                end = mid-1;
            else start = mid+1;
        }
        int xPos=mPos;
        start=0;
        end=nums.size()-1;
        while(start<=end){
            int mid = end + (start-end)/2;
            if(nums[mid] == target){
                xPos = max(mid,xPos);
                start=mid+1;
            }
            else if(nums[mid]>target)
                end = mid-1;
            else start = mid+1;
        }
        if(cond == false) return ans;
        for(int i=mPos;i<=xPos;i++) ans.push_back(i);
        //cout<<mPos<<" "<<xPos<<endl;
        return ans;
    }
};