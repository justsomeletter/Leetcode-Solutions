class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans;
        ans.push_back({1});
        for(int row=1;row<numRows;row++){ 
            vector<int> tempCol;
            for(int col = 0 ;col <= row; col++){
                if(col == 0 or col == row){
                    // if it's the first or last index assign it the value 1
                    tempCol.push_back(1);
                }
                else{
                    int temp = ans[row-1][col-1] + ans[row-1][col];
                    tempCol.push_back(temp);
                }
            }
            ans.push_back(tempCol);
        }
        return ans;
    }
};