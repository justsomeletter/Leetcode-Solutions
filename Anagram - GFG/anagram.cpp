// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        // int freq1[26]={0},freq2[26] = {0};
        // for(int i=0;i<a.length();i++){
        //     freq1[a[i]-97]++;
        // }
        // for(int i=0;i<b.length();i++){
        //     freq2[b[i]-97]++;
        // }
        // int ans=true;
        // for(int i=0;i<26;i++){
        //     if(freq1[i] != freq2[i]){
        //         ans=false;
        //     }
        // }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a == b) return true;
        else return false;
    }

};

// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends