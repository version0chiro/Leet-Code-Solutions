// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    
    bool DFS(int i,vector<int>adj[],vector<int>&col){
        
        for(auto a:adj[i]){
            if(col[a]==-1){
                col[a]=!col[i];
                if(! DFS(a,adj,col)) return false;
            }else if(col[a]==col[i]){
                // cout<<a<<" "<<i<<" "<<col[a]<<" ";
                return false;
            }
        }
        
        return true;
    }
    
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    
	    vector<int> col(V+1,-1);
	    
	    for(int i=0;i<V;i++){
	        if(col[i]==-1){
	            col[i]=0;
	            if(!DFS(i,adj,col))
	            return false;
	        }
	    }
	    
	     return true;
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
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends