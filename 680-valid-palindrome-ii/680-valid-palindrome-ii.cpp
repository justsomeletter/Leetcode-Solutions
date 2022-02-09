class Solution {
public:
    bool check_pal(string str){
        int n=str.size();
        for(int i=0;i<n;i++){
            if(str[i] != str[n-1-i]) return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        if(check_pal(s)) return true;
        else{
            int n=s.size();
            int start=0,end=n-1;
            string temp1=s,temp2=s;
            while(start<=end){
                if(s[start] != s[end]){
                    temp1.erase(start,1);
                    temp2.erase(end,1);
                    if(check_pal(temp1)) return true;
                    else if(check_pal(temp2)) return true;
                    else return false;
                }
                start++;
                end--;
            }
        }
        return true;
    }
};