// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    int solve(vector<vector<char>>& grid,int i,int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]=='O'){
            return 0;
        }
        
        grid[i][j]='O';
        
        solve(grid,i+1,j);
        solve(grid,i,j+1);
        solve(grid,i-1,j);
        solve(grid,i,j-1);
    }
    //Function to find the number of 'X' total shapes.
    int xShape(vector<vector<char>>& grid) 
    {
        // Code here
        
        int counter = 0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='X'){
                    counter++;
                    solve(grid,i,j);
                }
            }
        }
        
        return counter;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.xShape(grid);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends