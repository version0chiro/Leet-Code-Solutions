// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    int ans = 0;
    void dfs(int i,vector<int> adj[],vector<bool> &vis,vector<int> &low,vector<int> &tim,int parent,int &timer,int c,int d){
        if(ans==1) return;
        vis[i]=true;
        low[i]=tim[i]=timer++;
        
        for(auto a:adj[i]){
            if(a==parent) continue;
            
            if(!vis[a]){
                dfs(a,adj,vis,low,tim,i,timer,c,d);
                low[i]=min(low[i],low[a]);
                if(low[a]>tim[i]){
                    if((a==c && i==d) || (a== d && i==c)){
                        ans=1;
                        break;
                    }
                }
            }else{
                low[i]=min(low[i],tim[a]);
            }
        }
    }
    
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        // Code here
        int timer = 0;
        vector<bool> vis(V+1,false);
        vector<int> tim(V+1,-1);
        vector<int> low(V+1,-1);
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,adj,vis,low,tim,-1,timer,c,d);
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i=0;
        while (i++<E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back (v);
            adj[v].push_back (u);
        }
        
        int c,d;
        cin>>c>>d;
        
        Solution obj;
    	cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}

  // } Driver Code Ends