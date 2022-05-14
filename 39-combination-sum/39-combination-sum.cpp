class Solution {
public:
    
    void combSum(int ind,int target,vector<int> &arr,vector<int> &ds,vector<vector<int>> &ans){
        //base case
        if(ind == arr.size()){
            if(target == 0) {
                ans.push_back(ds);
            }
            return;
        }
        
        // picking the same index
        if(arr[ind] <= target){
          ds.push_back(arr[ind]);
        combSum(ind,target-arr[ind],arr,ds,ans);
        ds.pop_back();// removing is so as to perfomr the not picking waala case
           
        }
        
        //not picking it
         combSum(ind+1,target,arr,ds,ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        combSum(0,target,candidates,ds,ans);
        return ans;
    }
};