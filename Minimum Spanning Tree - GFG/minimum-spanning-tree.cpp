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
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        vector<int> key(V,INT_MAX);
        vector<bool> mst(V,false);
        vector<int>  parent(V,-1);
        
        key[0]=0;
        parent[0]=-1;
        
        pq.push({0,0});
        
        while(pq.size()){
            
            auto top = pq.top();
            pq.pop();
            mst[top.second]=true;
            // weight = top.first;
            
            for(auto a:adj[top.second]){
                int v=a[0];
                int w=a[1];
                
                if(mst[v]==false &&  key[v]>w){
                    key[v]=w;
                    pq.push({w,v});
                }
            }
        
            
            
        }
        
        int sum=0;
        
        for(auto a:key){
            // cout<<a<<" ";
            sum+=a;
        }
        
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