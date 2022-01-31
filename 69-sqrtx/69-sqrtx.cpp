class Solution {
public:
    int mySqrt(int x) {
        int ans=1;
        if(x == 0) return 0;
        int s=1,e=x;
        while(s<=e){
            int m= s+(e-s)/2;
            if(m>(x/m)) e = m-1;
            else{
                ans = max(ans,m);
                s = m+1;
            }
        }
        return ans;
    }
};