class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        
        vector<int> row,col;
        vector<vector<int>> ans;
        int k=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j] == 0){
                   row.push_back(i);
                   col.push_back(j);
                }
            }
        }
        // for making all the mentioned rows zeros
        for(int i=0;i<row.size();i++){
            for(int j=0;j<c;j++){
                matrix[row[i]][j] =0;
            }
        }
        
        // for making all the mentioned columns zeroes
        for(int i=0;i<r;i++){
            for(int j=0;j<col.size();j++){
                matrix[i][col[j]] = 0;
            }
        }
    }
};