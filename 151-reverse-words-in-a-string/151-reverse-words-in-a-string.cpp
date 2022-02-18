class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans;
        
        int i=0,j;
        while(i<n){
            while(i<n and s[i] == ' ')
                i++;
            j=i+1;
            while(j<n and s[j] != ' ') 
                j++;
            ans=" " + s.substr(i,j-i) + ans;
            i=j+1;
        }
        int k=0;
        while(k<n and ans[k] == ' ')// to remove extra spaces
            k++;                    // 
        ans=ans.substr(k);
        return ans;
    }
};