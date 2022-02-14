// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        queue<pair<int,int>> q;
        
        int freshC = 0 ;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2)
                    q.push({i,j});
                else if(grid[i][j]==1) freshC++;
            }
        }
        
        
        int ans = 0;
        
        while(q.size()){
            if(freshC==0) return ans;
            
            ans++;
            
            int s = q.size();
            
            for(int i=0;i<s;i++){
                auto curr = q.front();
                q.pop();
                
                int cI=curr.first,cJ=curr.second;
                
                if(cI>0 && grid[cI-1][cJ]==1){
                    grid[cI-1][cJ]=2;
                    q.push({cI-1,cJ});
                    freshC--;
                }
                if(cJ>0 && grid[cI][cJ-1]==1){
                    grid[cI][cJ-1]=2;
                    q.push({cI,cJ-1});
                    freshC--;
                }
                if(cI<grid.size()-1 && grid[cI+1][cJ]==1){
                    grid[cI+1][cJ]=2;
                    q.push({cI+1,cJ});
                    freshC--;
                }
                if(cJ<grid[0].size()-1 && grid[cI][cJ+1]==1){
                    grid[cI][cJ+1]=2;
                    q.push({cI,cJ+1});
                    freshC--;
                }
            }
            
        }
        
        return -1;
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
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends