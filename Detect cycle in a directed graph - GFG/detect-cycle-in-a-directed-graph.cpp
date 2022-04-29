// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool DFS(int i,vector<int> adj[],vector<bool>& vis1,vector<bool>& vis2){
        vis1[i]=true;
        vis2[i]=true;
        for(auto a:adj[i]){
            if(!vis1[a]){
                if(DFS(a,adj,vis1,vis2)){
                    return true;
                }
            }else if(vis2[a]){
                return true;
            }
        }
        vis2[i]=false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool> vis1(V,false);
        vector<bool> vis2(V,false);
        
        for(int i=0;i<V;i++){
            if(!vis1[i]){
                if(DFS(i,adj,vis1,vis2)){
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