// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
	
	bool isValid(int i,int j,int n,int m){
	    if(i<0 || j<0 || i>=n || j>=m) return false;
	    
	    return true;
	}
	
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        // Code here
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        
        pq.push({grid[0][0],{0,0}});
        
        int row = grid.size();
        int col = grid[0].size();
        
        vector<vector<int>> dist(row, vector<int>(col, INT_MAX));

        
        dist[0][0]=grid[0][0];
        
        while(pq.size()){
            int s = pq.size();
            
            for(int i=0;i<s;i++){
                
                auto top = pq.top();
                pq.pop();
                auto weight = top.first;
                
                auto cords = top.second;
                
                int corI = cords.first;
                int corJ = cords.second;
                // cout<<corI<<" "<<corJ<<"  ";
                
                
                if(isValid(corI+1,corJ,grid.size(),grid[0].size())){
                        // cout<<corI+1<<" "<<corJ<<"  ";
                        // cout<<weight+grid[corI+1][corJ]<<" "<<dist[corI+1][corJ]<<" ";
                    if(dist[corI+1][corJ]>weight+grid[corI+1][corJ]){
                        dist[corI+1][corJ]=weight+grid[corI+1][corJ];
                        pq.push({dist[corI+1][corJ],{corI+1,corJ}});
                    }
                }
                if(isValid(corI,corJ+1,grid.size(),grid[0].size())){
                    // cout<<corI<<" "<<corJ+1<<"  ";
                    if(dist[corI][corJ+1]>weight+grid[corI][corJ+1]){
                        dist[corI][corJ+1]=weight+grid[corI][corJ+1];
                        pq.push({dist[corI][corJ+1],{corI,corJ+1}});
                    }
                }
                if(isValid(corI-1,corJ,grid.size(),grid[0].size())){
                    // cout<<corI-1<<" "<<corJ<<"  ";
                    if(dist[corI-1][corJ]>weight+grid[corI-1][corJ]){
                        dist[corI-1][corJ]=weight+grid[corI-1][corJ];
                        pq.push({dist[corI-1][corJ],{corI-1,corJ}});
                    }
                }
                
                if(isValid(corI,corJ-1,grid.size(),grid[0].size())){
                    // cout<<corI-1<<" "<<corJ<<"  ";
                    if(dist[corI][corJ-1]>weight+grid[corI][corJ-1]){
                        dist[corI][corJ-1]=weight+grid[corI][corJ-1];
                        pq.push({dist[corI][corJ-1],{corI,corJ-1}});
                    }
                }
                    
                
            }
            // cout<<endl;
            
        }
        
        return dist[grid.size()-1][grid[0].size()-1];
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.minimumCostPath(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends