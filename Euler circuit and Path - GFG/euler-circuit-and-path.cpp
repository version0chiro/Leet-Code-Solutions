// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    
    void DFS(int i,vector<int>adj[],vector<bool> &visited){
        visited[i]=true;
        
        for(auto a:adj[i]){
            if(!visited[a])
                DFS(a,adj,visited);
        }
    }
    
	int isEularCircuit(int V, vector<int>adj[]){
	    // Code here
	    vector<bool> visited(V,false);
	    int i;
	    for( i=0;i<V;i++){
	        if(adj[i].size()!=0) break;
	    }   
	    
	   // if(i==V) return true;
	    
	    DFS(i,adj,visited);
	    
	    for(int i=0;i<V;i++){
	        if(visited[i]==false && adj[i].size()>0) return 0;
	    }
	    
	    int odd = 0;
	    
	    for(int i=0;i<V;i++){
	        if(adj[i].size() & 1) odd++;
	        
	    }
	    
        if(odd>2) return 0;
	    
	    return odd?1:2;
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		int ans = obj.isEularCircuit(V, adj);
		cout << ans <<"\n";	}
	return 0;
}  // } Driver Code Ends