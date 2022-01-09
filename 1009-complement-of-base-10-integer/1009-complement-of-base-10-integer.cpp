class Solution {
public:
    int bitwiseComplement(int n) {
        int i=0,ans =0,num=n;
        if(n==0) return 1;
        else{
        while(num){
            num = num>>1;
            i++;
        }
        int maximum = pow(2,i)-1;
        return maximum-n;
        }
    }
};