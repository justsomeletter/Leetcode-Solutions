class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int ex) {
        int maxnum=-1;
        vector<bool> ans(candies.size());
        
        //loop to find the maximum number
        for(int i=0;i<candies.size();i++){
            maxnum = max(maxnum,candies[i]);
        }
        
        for(int i=0;i<candies.size();i++){
            candies[i] = candies[i] - maxnum;
            if(candies[i] + ex>= 0) ans[i] = true;
            else ans[i] = false;
        }
        
        return ans;
    }
};