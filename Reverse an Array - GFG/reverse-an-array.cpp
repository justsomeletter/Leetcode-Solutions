#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         int arr[n];
         for(int i=0;i<n;i++){
             cin>>arr[i];
         }
         int start=0,last=n-1;
         while(start<last){
             int temp = arr[start];
             arr[start] = arr[last];
             arr[last] = temp;
             start++;
             last--;
         }
         for(int i=0;i<n;i++){
             cout<<arr[i]<<" ";
         }
         cout<<endl;
     }
	//code
	return 0;
}