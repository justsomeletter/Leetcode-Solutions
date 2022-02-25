class Solution {
public:
    int arrangeCoins(int n) {
        int ans,temp;
        for(int i=1;i<=1e9;i++){
            if(n<i){
                ans=i-1;
                break;
            }
            n=n-i;
        }
        return ans;
    }
};