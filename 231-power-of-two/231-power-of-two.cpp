class Solution {
public:
    bool isPowerOfTwo(int n) {
        int temp,num=n;
        bool cond = false;
        for(int i=0;i<32;i++){
            if(pow(2,i) == n) {
                cond = true;
                break;
            }
        }
        // for(int j =-31;j<0;j++){
        // if(pow(2,j) == n){
        //     cond = true;
        //     break;
        // }
        //}
        return cond;
 }
};