// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
public:
    
    int dp[501][501];

    int solve(int i,int j,int n,int m, vector<vector<int>> t){
        
        
        
        if(n<0  || m<0 || t[n][m]==-1) return 0;
                if(n==0 && m==0) return 1;

        // cout<<i<<" "<<j<<" \n";
        
        if(dp[n][m]!=-1) return dp[n][m];
        
        int r = solve(i,j,n,m-1,t)%1000000007;
        int d = solve(i,j,n-1,m,t)%1000000007;
        
        dp[n][m]=(r+d)%1000000007;
        
        return dp[n][m];
        
        
    }
	int FindWays(int n, int m, vector<vector<int>>blocked_cells){
	    // Code here
	   // int t[n+1][m+1];
	    
	   // memset(t,0,sizeof(t));
	    
        vector<vector<int>> t( n , vector<int> (m, 0));
        
        memset(dp,-1,sizeof(dp));
	    
	    for(auto a:blocked_cells){
	        t[a[0]-1][a[1]-1]=-1;
	    }
	    
	    
	    return solve(0,0,n-1,m-1,t);
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, k;
		cin >> n >> m >> k;
		vector<vector<int>>blocked_cells;
		for(int i = 0; i < k; i++){
			int x, y;
			cin >> x >> y;
			blocked_cells.push_back({x, y});
		}
		Solution obj;
		int ans = obj.FindWays(n, m, blocked_cells);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends