// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    
	    long long lP = 1;
	    long long  rP = 1;
	    
	    long long ans = INT_MIN;
	    
	    for(int i=0;i<n;i++){
	        
	        lP=lP*arr[i]==0?1:lP*arr[i];
	        
	        rP=rP*arr[n-i-1]==0?1:rP*arr[n-i-1];
	        
	       // cout<<lP<<" "<<rP<<" \n";
	        ans=max(max(lP,rP),ans);
	    }
	    
	    return ans;
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends