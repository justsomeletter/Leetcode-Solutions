// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
public:
    int findPeakElement(vector<int>& a) {
        // Code here.
        int n=a.size();
        int s=0,e=n-1;
        while(s<=e){
            int m=s + (e-s)/2;
            if(a[m]>a[m-1] and a[m]>a[m+1]) return a[m];
            if(a[m]>a[m-1] and a[m]<a[m+1]) s=m+1;
            if(a[m]<a[m-1] and a[m]>a[m+1]) e = m-1;
        }
    }
};



// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}

  // } Driver Code Ends