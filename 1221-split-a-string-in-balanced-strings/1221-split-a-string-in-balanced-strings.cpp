class Solution {
public:
    int balancedStringSplit(string s) {
        int c1=0,c2=0;
        int n=s.size(),ans=0;
        for(int i=0;i<n;i++){
            if(s[i] == 'R') c1++;
            else c2++;
            if(c1 == c2 ){
                c1=0;
                c2=0;
                ans++;
            }
        }
        return ans;
    }
};