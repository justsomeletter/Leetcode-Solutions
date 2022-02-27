class Solution {
public:
    int fib(int n) {
        //base case
        if(n ==1 or n== 0) return n;
        
        // recursive case
        return fib(n-1)+fib(n-2);
    }
};