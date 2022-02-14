// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

    

	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    queue<int> q;
	    
	    vector<int> col(V+1,-1);
	    
	    
	    for(int i=0;i<V;i++){
	        if(col[i]==-1){
	            q.push(i);
	            col[i]=0;
	    while(q.size()){
	        int s=q.size();
	        
	        for(int i=0;i<s;i++){
	            auto curr = q.front();
	            q.pop();
	            
	            for(auto a:adj[curr]){
	                if(col[a]==-1){
	                    col[a]=!col[curr];
	                    q.push(a);
	                }
	                
	                else if(col[a]==col[curr])
	                    return false;
	            }
	            
	        }
	    }
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