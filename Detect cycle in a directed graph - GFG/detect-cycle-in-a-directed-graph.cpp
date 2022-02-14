// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    bool dfs(int i,vector<int> adj[],vector<bool>&vis,vector<bool>&dfsVis){
        vis[i]=true;
        dfsVis[i]=true;
        
        for(auto a:adj[i]){
            if(!vis[a]){
                if(dfs(a,adj,vis,dfsVis)) return true;
            }
            else if (dfsVis[a]) {
                // cout<<i<<" \n";
                return true;
                
            }
                
        }
        
        dfsVis[i]=false;
        
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool> vis(V,false);
        vector<bool> dfsVis(V,false);
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfs(i,adj,vis,dfsVis)){
                    return true;
                }
            }
        }
        
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends