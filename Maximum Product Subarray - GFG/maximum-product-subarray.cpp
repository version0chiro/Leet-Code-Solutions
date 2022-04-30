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
	    long long ans = INT_MIN;
	    long long leftP = 1;
	    long long rightP = 1;
	    
	    for(int i=0;i<n;i++){
	        leftP=leftP*arr[i];
	        if(leftP==0) leftP=1;
	        
	        rightP = rightP*arr[n-i-1];
	        if(rightP==0)rightP=1;
	        
	        ans=max(max(leftP,rightP),ans);
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