// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string ans;
        int temp=0,count=0;
        bool cond = true;
        int min_l=INT_MAX;
        for(int i=0;i<N;i++){
            min_l = arr[i].size()<min_l ? arr[i].size() : min_l;
        }
        while(cond and N != 1){
            for(int i=0;i<N-1;i++){
                if(arr[i][count] != arr[i+1][count] or count>=min_l){
                    cond=false;
                    break;
                }
            }
            if(cond){
                ans.push_back(arr[0][count]);
                count++;
            }
        }
        if(N == 1) return arr[0];
        else if(ans == "\0") return "-1";
        else return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends