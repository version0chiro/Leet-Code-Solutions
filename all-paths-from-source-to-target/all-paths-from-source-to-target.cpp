class Solution {
public:
    vector<vector<int>> ans;
    
    void DFS(vector<vector<int>> graph,int v,int e,vector<bool> visited,vector<int> temp){
        
        visited[v]=true;
        temp.push_back(v);
        if(v==e){
            ans.push_back(temp);
            return;
        }
        for(auto u:graph[v]){
            if(!visited[u])
                DFS(graph,u,e,visited,temp);
        }
        visited[v]=false;
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<bool> visited(n,false);
        DFS(graph,0,n-1,visited,{});
        
        return ans;
        
        
        
    }
};