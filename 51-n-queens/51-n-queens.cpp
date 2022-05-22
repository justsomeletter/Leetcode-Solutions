class Solution {
public:
    bool isSafe(int row,int col,vector<string> &boards,int n){
        int refRow = row, refCol = col;
        
        //checking upper daigonal
        while(row >= 0 && col >= 0){
            if(boards[row][col] == 'Q') return false;
            row--;
            col--;
        }
        
        row = refRow;
        col = refCol;
        
        //checking for backwards
        while(col >= 0){
            if(boards[row][col] == 'Q') return false;
            col--;
        }
        
        row = refRow;
        col = refCol;
        
        
        //checking for lower daigonal
        
        while(row < n && col >= 0){
            if(boards[row][col] == 'Q') return false;
            row++;
            col--;
        }
        return true;
    }
    
    void solve(int col,vector<vector<string>> &ans,vector<string> &boards,int n){
        if(col == n){
            ans.push_back(boards);
            return;
        }
        
        for(int row=0;row<n;++row){
            if(isSafe(row,col, boards,n)){
                
                boards[row][col] = 'Q';
                solve(col+1,ans,boards,n);
                 boards[row][col] = '.';
            }
        }
        
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> boards(n);
        string s(n,'.');
        
        for(int i=0;i<n;i++){
            boards[i] = s;
        }
        solve(0,ans,boards,n);
        return ans;
    }
};