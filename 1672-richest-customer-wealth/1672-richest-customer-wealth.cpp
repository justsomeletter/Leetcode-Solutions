class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int row=accounts.size();
        int column=accounts[0].size();
        int ans=INT_MIN,temp;
        
        for(int i=0;i<row;i++){
            temp=0;
            for(int j=0;j<column;j++){
                temp += accounts[i][j];
            }
            ans = max(ans,temp);
        }
        return ans;
    }
};