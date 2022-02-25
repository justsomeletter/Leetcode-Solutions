class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int pos=-1;
        int start=0,end=arr.size()-1;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]> arr[i-1] and arr[i]>arr[i+1]){
                pos=i;
                break;
            }
        }
        return pos;
    }
};