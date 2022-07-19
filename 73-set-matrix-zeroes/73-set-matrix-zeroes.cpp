class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        vector<int> dum_row(matrix[0].size(),-1);
         vector<int> dum_col(matrix.size(),-1);
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                   if(matrix[i][j] == 0){
                       dum_row[j] = 0;
                       dum_col[i] = 0;
                   }
            }
        }
        //making the column zeroes
       for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(dum_row[j] == 0) matrix[i][j] = 0;
                if(dum_col[i] == 0) matrix[i][j] = 0;
            }
       }
    }
};