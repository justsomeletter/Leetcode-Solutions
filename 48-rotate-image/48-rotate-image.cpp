class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
       for(int row=0;row<n;row++){
	 	    int count=row;
	 	    while(count){
	 		    count--;
	 		    swap(matrix[row][count],matrix[count][row]);
	 	    }
	    }
        for(int row=0;row<n;row++){
	 	    reverse(matrix[row].begin(),matrix[row].end());
	    }
    }
};