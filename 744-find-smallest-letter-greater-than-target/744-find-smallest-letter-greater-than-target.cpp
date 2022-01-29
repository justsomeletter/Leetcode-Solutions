class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s=0,e = letters.size()-1;
        char ans=123;
        while(s<=e){
            int m= (s+e)/2;
            if(letters[m]>target){
                ans = min(ans,letters[m]);
                e=m-1;
            }
            else s = m+1;
        }
        ans = letters[s%letters.size()];
        return ans;
    }
};