// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    
    int solve(vector<vector<int>>& grid,int i,int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0) return 0;
        
        grid[i][j]=0;
        
        int t = solve(grid,i-1,j);
        int d = solve(grid,i+1,j);
        int l = solve(grid,i,j-1);
        int r = solve(grid,i,j+1);
        int tl = solve(grid,i-1,j-1);
        int tr = solve(grid,i-1,j+1);
        int bl = solve(grid,i+1,j-1);
        int br = solve(grid,i+1,j+1);
        
        return 1 + t+d+l+r+tl+tr+bl+br;
        
    }
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int ans = INT_MIN;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    
                    ans = max(ans,solve(grid,i,j));
                } 
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends