class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0,temp=0;
    for(int start=0;start<s.size();start++){
        vector<int> arr(128,0);
        temp=0;
        for(int j=start;j<s.size();j++){
            int ind = s[j];
            arr[ind]++;
            if(arr[ind] >= 2){
                ans = max(ans,temp);
                temp=0;
                break;
            }
            else if(arr[ind] <= 1){
                temp++;
            }
        }
        ans = max(ans,temp);
    }
        return ans;
    }
};