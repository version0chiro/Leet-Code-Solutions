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
        vector<bool> mst(V+1,false);
        
        vector<int> key(V+1,INT_MAX);
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        
        
        pq.push({0,0});
        
        key[0]=0;
        
        while(pq.size()){
            
            auto top=pq.top();
            
            mst[top.second]=true;
            
            pq.pop();
            
            for(auto a:adj[top.second]){
                if(mst[a[0]]==false && a[1]<key[a[0]]){
                    key[a[0]]=a[1];
                    pq.push({a[1],a[0]});
                }
            }
            
            
            
        }
        
        
        int ans = 0;
        
        for(int i=0;i<V;i++){
            ans+=key[i];
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