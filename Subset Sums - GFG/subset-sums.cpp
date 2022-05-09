// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> subsetSums(vector<int> arr, int N){
        vector<int> ans;
        subsetSum(arr,0,arr.size()-1,ans);
        return ans;
    }
    void subsetSum(vector<int> v, int l,int r,vector<int> & ans,int sum=0){
        if(l>r){
		ans.push_back(sum);
		return ;
	}

	// taking the element
	subsetSum(v ,l+1, r, ans, sum + v[l]);

	//Not taking the element
	subsetSum(v ,l+1 ,r ,ans ,sum);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends