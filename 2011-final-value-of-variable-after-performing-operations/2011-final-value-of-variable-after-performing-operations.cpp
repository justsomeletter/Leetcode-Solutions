class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        int size = operations.size();
        for(int i=0;i<size;i++){
            if(operations[i][1] == '-') x--;
            else x++;
        }
        return x;
    }
};