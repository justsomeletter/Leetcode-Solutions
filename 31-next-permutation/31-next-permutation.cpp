class Solution {
 public:
  void nextPermutation(vector<int>& nums) {
   int i;
   const int n=nums.size();
      
      // find the breakpoint nums[i]<nums[i+1]
      for(i=n-2;i>=0;--i){
          if(nums[i]<nums[i+1])
              break;
     }
      // swap with nums[i] >nums[ind2]
      if(i >= 0){
          for(int j=n-1;j>=i;--j){
              if(nums[j]>nums[i]){
                  swap(nums[i],nums[j]);
                  break;
              }
          }
      }
      reverse(nums.begin()+i+1,nums.end());
  }
};
