// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
public:
    long long dp[101][101][101];
    long long solve(int i,int j,int k,int n,vector<vector<int>>&a)
   {
       if(i>=n||j>=n)
       return 0;
       if(i==n-1&&j==n-1)
       return k==a[i][j];
       if(dp[i][j][k]!=-1)
       return dp[i][j][k];
       return dp[i][j][k]=solve(i+1,j,k-a[i][j],n,a)+solve(i,j+1,k-a[i][j],n,a);
   }
     long long numberOfPath(int n, int k, vector<vector<int>> a){
       dp[n][n][k];
       memset(dp,-1,sizeof(dp));
     return solve(0,0,k,n,a);
   }
};

// { Driver Code Starts.

int main()
{
    Solution obj;
    int i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        vector<vector<int>> v(n+1, vector<int>(n+1, 0));
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>v[i][j];
        cout << obj.numberOfPath(n, k, v) << endl;
    }
}  // } Driver Code Ends