class Solution {
public:
    vector<vector<int>> ans;
    void dfs(int i,int parent,vector<bool> &vis,vector<int> &tim,vector<int> &low,int &timer,vector<int> adj[]){
        vis[i]=true;
        tim[i]=low[i]=timer++;
        for(auto a:adj[i]){
            if(a==parent) continue;
            
            if(!vis[a]){
                dfs(a,i,vis,tim,low,timer,adj);
                low[i]=min(low[i],low[a]);
                if(low[a]>tim[i]){
                    ans.push_back({i,a});
                }
            }else{
                low[i]=min(low[i],tim[a]);
            }
        }
    }
    
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int> adj[n+1];
        
        for(auto a:connections){
            adj[a[0]].push_back(a[1]);
            adj[a[1]].push_back(a[0]);
        }
        
        vector<bool> vis(n+1,false);
        
        vector<int> tim(n+1,-1);
        
        vector<int> low(n+1,-1);
        
        int timer = 0;
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,-1,vis,tim,low,timer,adj);
            }
        }
        
        return ans;
    }
};