// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) { 
        // code here 
        int size = S.size(),count=0;
        string arr[size],ans;
        for(int i=0;i<size;i++){
            if(S[i] == '.'){
                count++;
                arr[count].push_back('.');
                count++;
            }
            else{
                arr[count].push_back(S[i]);
            }
        }
        
        for(int i=count;i>=0;i--){
           ans += arr[i] ;
        }
        return ans;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends