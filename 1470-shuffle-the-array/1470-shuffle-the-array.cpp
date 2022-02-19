class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr1(n),arr2(n);
        
        for(int i=0;i<n;i++){
            arr1[i] = nums[i];
        }
        for(int i=n;i<2*n;i++){
            arr2[i-n] = nums[i];
        }
        vector<int> ans;
        int j=0,k=0;
        for(int i=0;i<2*n;i++){
            if(i%2==0) {
                ans.push_back(arr1[j]);
                j++;
            }
            else{
                ans.push_back(arr2[k]);
                k++;
            }
        }
        return ans;
    }
};