// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {

public:

    bool dfs(vector<int> adj[],int i,vector<int>& visited,int c){
        visited[i]=c;
        
        int next_c = c==1?2:1;
        
        for(auto a:adj[i]){
            if(visited[a]==0){
                if(dfs(adj,a,visited,next_c)){
                    return true;
                }
            }else if(visited[a]==c){
                return true;
            }
        }
        
        return false;
    }

	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	   //1 - >red 
	   //2 -> green
	   // 0 ->white
	    vector<int> visited(V,0);
	    
	    for(int i=0;i<V;i++){
	        if(visited[i]==0){
    	        if(dfs(adj,i,visited,1)){
    	            return false;
    	        }
	        }
	    }
	    
	    return 1;
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