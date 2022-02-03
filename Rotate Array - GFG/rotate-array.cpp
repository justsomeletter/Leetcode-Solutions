// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        d = d%n;
        if(d == 0) return;
        int part1[n],part2[n],start=0;
        for(int i=0;i<n;i++){
            if(i<d){
                part1[start] = arr[i];
                start++;
            }
            else{
                part2[i-d] = arr[i];
            }
        }
        int diff=n-d;
        for(int i=0;i<n;i++){
            if(i<diff){
                arr[i] = part2[i];
            }
            else{
                arr[i] = part1[i-diff];
            }
        }
    }
};

// { Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}  // } Driver Code Ends