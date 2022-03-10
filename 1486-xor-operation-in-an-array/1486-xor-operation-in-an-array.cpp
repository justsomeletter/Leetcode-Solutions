class Solution {
public:
    int xorOperation(int n, int start) {
        int arr[n],nums=0;
        for(int i=0;i<n;i++){
            arr[i] = start+2*i;
            nums = nums^arr[i];
        }
        return nums;
    }
};