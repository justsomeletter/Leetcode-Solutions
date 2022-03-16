class Solution {
public:
    void arrangement(vector<int> &ans,int pos){
        int start=pos,end=ans.size()-1;
        int temp=ans[end]; // 0 1 2 3
        for(int i=end;i>start;i--){
            ans[i] = ans[i-1];
        }
        ans[start] = temp;
        
    }
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
           ans.push_back(nums[i]);
            int pos= index[i];
            arrangement(ans,pos);
        }
        return ans;
    }
};