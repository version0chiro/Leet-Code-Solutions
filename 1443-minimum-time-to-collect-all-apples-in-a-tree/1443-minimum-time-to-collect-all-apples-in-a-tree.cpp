class Solution {
public:
    
    int DFS(int i,int selfCost,vector<int> adj[],vector<bool> &visited,vector<bool>& hasApple){
        if(visited[i]) return 0;
        
        visited[i]=true;
        
        int childC = 0;
        for(auto a:adj[i]){
            childC+=DFS(a,2,adj,visited,hasApple);
        }
        
        if(childC==0 && hasApple[i]==false) return 0;
        
        
        return childC+selfCost;
        
    }
    
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        
        int ans = 0;
        
        vector<int> adj[n+1];
        
        for(auto a:edges){
            adj[a[0]].push_back(a[1]);
            adj[a[1]].push_back(a[0]);
        }
        
        
        vector<bool> visited(n+1,false);
        
        
        return DFS(0,0,adj,visited,hasApple);
        
        
        
        // return ans;
        
    }
};