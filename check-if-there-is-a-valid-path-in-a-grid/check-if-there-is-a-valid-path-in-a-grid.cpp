class Solution {
public:
    vector<pair<int,int>> dirs{{0,1},{0,-1},{1,0},{-1,0}};
    
    unordered_map<int, int> turns[7]{{}, 
    {{0, 0}, {1, 1}}, {{2, 2}, {3, 3}}, {{0, 2}, {3, 1}}, 
    {{3, 0}, {1, 2}}, {{0, 3}, {2, 1}}, {{2, 0}, {1, 3}}};
    
    bool trace(vector<vector<int>> &g,int dir){
        int i=0,j=0,m=g.size(),n=g[0].size();
        while(min(i,j)>=0 && i<m && j<n){
            auto road=g[i][j];
            
            if(turns[road].count(dir)==0) return false;
            
            if(i==m-1 && j==n-1) return true;
            
            dir=turns[road][dir];
            
            i+=dirs[dir].first,j+=dirs[dir].second;
            if(i==0 && j==0)
                return false;
        }
        
        return false;
    }
    bool hasValidPath(vector<vector<int>>& grid) {
        return trace(grid,0) ||trace(grid,1)||trace(grid,2)||trace(grid,3);
    }
};