class Solution {
public:
    bool isPal(string s){
        int start=0,end=s.size()-1;
        while(start<=end){
            if(s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(isPal(words[i])) return words[i];
        }
        return "";
    }
};