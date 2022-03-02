class Solution {
public:
    int minimumSum(int num) {
        int arr[4],i=0;
        while(num){
            int rem = num%10;
            arr[i] = rem;
            i++;
            num=num/10;
        }
        sort(arr,arr+4);
        int num1 = arr[0]*10 + arr[2];
        int num2 = arr[1]*10 + arr[3];
        return num1+num2;
    }
};