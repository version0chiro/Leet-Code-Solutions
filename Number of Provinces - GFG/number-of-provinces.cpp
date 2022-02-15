// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    
    void DFS(vector<int> adj[],int i,vector<bool> &vis){
        vis[i]=true;
        
        for(auto a:adj[i]){
            if(!vis[a])
                DFS(adj,a,vis);
        }
    }
  
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        
        // queue<int> q;
        
        vector<bool> vis(V+1,false);
        
        vector<int> adj_l[V+1];
        
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j]){
                    
                adj_l[i+1].push_back(j+1);
                adj_l[j+1].push_back(i+1);
                }
            }
        }
        
        // for(int i=1;i<=V;i++){
        //     // cout<<i<<":";
        //     for(auto a:adj_l[i]){
        //         cout<<a<<" ";
        //     }
            
        //     cout<<"\n";
        // }
        
        int count = 0;
        
        for(int i=1;i<=V;i++){
            
            
            if(!vis[i]){
                count++;
                DFS(adj_l,i,vis);
                
            }
                
        }
        
        return count;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}  // } Driver Code Ends