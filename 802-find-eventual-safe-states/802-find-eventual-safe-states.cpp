class Solution {
public:
    
    bool dfs(vector<vector<int>>& graph,int i,unordered_map<int,bool> &m){
        if(m.find(i)!=m.end()) return m[i];
        
        m[i]=false;
        for(int j=0;j<graph[i].size();j++){
            if(!dfs(graph,graph[i][j],m)){
                return m[i];
            }
        }
        m[i]=true;
        return m[i]=true;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        unordered_map<int,bool> m;
        int V = graph.size();
        vector<int> ans;
        for(int i=0;i<V;i++){
            
            
            if(dfs(graph,i,m)){
                ans.push_back(i);
            }
        }
        
        return ans;
        
    }
};