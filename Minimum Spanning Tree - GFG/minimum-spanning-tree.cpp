// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        bool minST[V+1];
        int dist[V+1];
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        for(int i=0;i<V+1;i++){
            minST[i]=false;
            dist[i]=INT_MAX;
        }
        
        pq.push({0,0});
        dist[0]=0;
        
        while(pq.size()){
            int u = pq.top().second;
            pq.pop();
            minST[u]=true;
            
            for(auto it:adj[u]){
                int v = it[0];
                int w= it[1];
                
                if(minST[v]==false && w<dist[v]){
                    dist[v]=w;
                    pq.push({w,v});
                }
            }
        }
        int sum = 0;
        for(int i=0;i<V;i++){
            // cout<<dist[i]<<" ";
            sum+=dist[i];
        }
        // cout<<endl;
        return sum;
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
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends