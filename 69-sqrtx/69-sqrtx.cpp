class Solution {
public:
    int mySqrt(int x) {
        int ans=1;
        if(x == 0) return 0;
        for(int i=1;i<=x/2;i++){
            if(i>(x/i)){
                break;
            }
            else if(i*i <= x)
                ans = i;
            
        }
        return ans;
    }
};