class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string str=s;
        for(int i=0;i<indices.size();i++){
            int temp = indices[i];
           str[temp] = s[i];
        }
        return str;
    }
};