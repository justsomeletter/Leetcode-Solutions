class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int pos=-1;
        int start=0,end=arr.size()-1;
        while(start<=end){
            int mid = end+(start-end)/2;
            if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1]) return mid;
            else if(arr[mid]<arr[mid-1]) end=mid-1;
            else start=mid+1;
        }
        return pos;
    }
};