class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans;
        vector<string> str;
        for(int i=0;i<n;i++){
            if(s[i] != ' '){
                string temp;
                for(int j=i;j<n;j++){
                    if(s[j] == ' '){
                        str.push_back(temp);
                        break;
                    }
                    else if(j == n-1) {
                        temp += s[j];
                        str.push_back(temp);
                    }
                    else temp += s[j];
                    i++;
                }
            }
        }
        reverse(str.begin(),str.end());
        for(int i=0;i<str.size();i++){
            ans += str[i];
            if(i != str.size()-1)
                ans += ' ';
        }
        return ans;
    }
};