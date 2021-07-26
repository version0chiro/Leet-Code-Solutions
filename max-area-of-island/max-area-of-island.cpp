class Solution {
public:
    int dfs(vector<vector<int>>& grid,int x,int y){
        if(min(x,y)<0 || x>=grid.size() || y>=grid[0].size() || grid[x][y]==0)
            return 0;
        
        grid[x][y]=0;
        
        int l = dfs(grid,x,y-1);
        int r = dfs(grid,x,y+1);
        int u = dfs(grid,x+1,y);
        int d = dfs(grid,x-1,y);
        
        return l+r+u+d+1;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = INT_MIN;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]){
                    int temp = dfs(grid,i,j);
                    ans = max(ans,temp);
                }
                    
            }
        }
                              
      return max(ans,0);
    }
};