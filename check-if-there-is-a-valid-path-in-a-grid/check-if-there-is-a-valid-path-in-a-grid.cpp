class Solution {
public:
    bool dfs(vector<vector<bool>> &g, int i , int j){
        if(min(i,j)<0 || i>=g.size() || j>=g[0].size() || !g[i][j]) return false;
        
        if(i==g.size()-2 && j==g[i].size()-2) return true;
        
        g[i][j]=false;
        
        return dfs(g,i+1,j) || dfs(g,i-1,j)||dfs(g,i,j+1)||dfs(g,i,j-1);
    }
    bool hasValidPath(vector<vector<int>>& grid) {
        int m = grid.size(), n= grid[0].size();
        
        vector<vector<bool>> g(m*3,vector<bool> (n*3));
        
        for(auto i=0;i<m;i++){
            for(int j=0;j<n;j++){
                auto r= grid[i][j];
                g[i*3 +1][j*3 +1]=true;
                g[i*3+1][j*3+0]=r==1||r==3||r==5;
                g[i*3+1][j*3+2]=r==1||r==4||r==6;
                g[i*3+0][j*3+1]=r==2||r==5||r==6;
                g[i*3+2][j*3+1]=r==2||r==3||r==4;
            }
            
        }
        
        return dfs(g,1,1);
    }
};