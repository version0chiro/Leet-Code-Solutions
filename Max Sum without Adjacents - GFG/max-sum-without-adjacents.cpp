// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int solve(int *arr,int n,int i){
	    if(i>=n) return 0;
	    
	    int taken = arr[i]+solve(arr,n,i+2);
	    int notTaken = solve(arr,n,i+1);
	    
	    return max(taken,notTaken);
	}
	
	int findMaxSum(int *arr, int n) {
	    // code here
	    int dp[n];
	    dp[0]=arr[0];
	    dp[1]=max(arr[0],arr[1]);
	    
	    for(int i=2;i<n;i++){
	        dp[i]=max(dp[i-2]+arr[i],dp[i-1]);
	    }
	    
	    
	    
	    return dp[n-1];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends