// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	
	void DFS(int i,stack<int> &st,vector<bool> &visited,vector<int> adj[]){
	    visited[i]=true;
	    
	    for(auto a:adj[i]){
	        if(!visited[a]){
	            DFS(a,st,visited,adj);
	       }
	    }
	    
	    st.push(i);
	}
	
	void DFS_2(int i,vector<bool> &visited,vector<int> adj[]){
	    visited[i]=true;
	   // cout<<i<<" ";
	    
	    for(auto a:adj[i]){
	        if(!visited[a]){
	            DFS_2(a,visited,adj);
	       }
	    }
	    
	    
	}
	
    int kosaraju(int V, vector<int> adj[])
    {
        
        vector<bool> visited(V+1,false);
        
        stack<int> st;
        
        for(int i=0;i<V;i++){
            if(visited[i]==false){
                DFS(i,st,visited,adj);
            }
        }
        
        vector<int> adj2[V];
        
        for(int i=0;i<V;i++){
            for(auto a:adj[i]){
                adj2[a].push_back(i);
            }
        }
        
        // for(int i=0;i<V;i++){
        //     cout<<i<<":";
        //     for(auto a:adj2[i]){
        //         cout<<a<<" ";
        //     }
        //     cout<<endl;
        // }
        
        for(int i=0;i<V+1;i++){
            visited[i]=false;
        }
        
        int count = 0;
        
        while(st.size()){
            int curr = st.top();
            if(visited[curr]==false){
                // cout<<curr<<"\n";
                DFS_2(curr,visited,adj2);
                count++;
            }
            
            st.pop();
        }
        
        
        return count;
        //code here
    }
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends