class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long int ans=0,temp=x;
        while(temp){
            ans *= 10;
            int rem = temp%10;
            ans += rem;
            temp =temp/10;
        }
        if(ans == x) return true;
        else return false;
    }
};