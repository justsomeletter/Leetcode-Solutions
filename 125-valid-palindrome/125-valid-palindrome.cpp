class Solution {
public:
    bool isPalindrome(string s) {
        string f_str;
        int size = s.size();
        for(int i=0;i<size;i++){
            if((s[i] >= 'A' and s[i] <= 'Z') or (s[i]>= 'a' and s[i]<='z')){
                f_str += tolower(s[i]);
            }
            else if(s[i]>='0' and s[i]<='9') f_str += s[i];

        }
        int size2=f_str.size();
        bool ans = true;
        for(int i=0;i<size2/2;i++){
            if(f_str[i] != f_str[size2-1-i]){
                ans = false;
                break;
            }
        }
        return ans;
        
    }
};