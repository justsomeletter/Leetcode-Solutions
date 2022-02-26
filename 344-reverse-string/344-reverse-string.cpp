class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int start=0,end=n-1;
        reverse(s,start,end);
    }
    void reverse(vector<char>& s,int start,int end){
        //base case
        if(start>=end) return;
        
        swap(s[start],s[end]);
        start++;
        end--;
        reverse(s,start,end);
    }
};