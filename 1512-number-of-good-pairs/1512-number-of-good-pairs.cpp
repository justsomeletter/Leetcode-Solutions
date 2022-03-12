class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int freq[110]={0};
        for(int i=0;i<n;i++){
           freq[nums[i]]++;
        }
        for(int i=1;i<=100;i++){
            if(freq[i]>=2){
                ans += (freq[i]*(freq[i]-1))/2;
            }
        }
        return ans;
    }
};