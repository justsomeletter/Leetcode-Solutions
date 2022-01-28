class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res=0;
        for(auto x:operations){
           res= x[1] == '+' ? res+1:res-1;
        }
        return res;
    }
};