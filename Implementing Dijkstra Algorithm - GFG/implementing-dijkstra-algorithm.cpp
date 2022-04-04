// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int> dist(V,INT_MAX);
        vector<int> fin(V,false);
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        dist[S]=0;
        
        pq.push({0,S});
        
        while(pq.size()){
            auto top = pq.top();
            pq.pop();
            int u = top.second;
            // int w  =  top.first
            fin[u]=true;
            
            for(auto a:adj[u]){
                int node=a[0];
                
                int d = a[1];
                
                if(!fin[node] && (dist[node]>dist[u]+d)){
                    dist[node]=dist[u]+d;
                    pq.push({dist[node],node});
                    }
            }
            
        }
        
        return dist;
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
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}

  // } Driver Code Ends