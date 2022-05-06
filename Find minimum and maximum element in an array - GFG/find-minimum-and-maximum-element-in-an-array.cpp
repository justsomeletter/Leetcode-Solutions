// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    long long mine = INT_MAX,maxx = INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>maxx) maxx = a[i];
        if(a[i]<mine) mine = a[i];
    }
    pair<long long, long long> ans;
    ans.first = mine;
    ans.second = maxx;
    return ans;
}