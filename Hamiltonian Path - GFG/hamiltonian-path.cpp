// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    bool dfs(int i,vector<int> adj[],vector<bool> &vis,int cnt,int V){
        // cnt++;
        if(cnt==V) return true;
        
        vis[i]=true;
        
        for(auto a:adj[i]){
            if(!vis[a]){
                if(dfs(a,adj,vis,cnt+1,V)) return true;
            }
        }
        vis[i]=false;
        
        return false;
    }
    
    bool check(int N,int M,vector<vector<int>> Edges)
    {
        // code here
        
        vector<int> adj[N+1];
        
        for(auto a:Edges){
            adj[a[0]].push_back(a[1]);
            adj[a[1]].push_back(a[0]);
        }
        
        vector<bool> vis(N+1,false);
        
        for(int i=1;i<=N;i++){
            // if(!vis[i]){
                if(dfs(i,adj,vis,1,N) ) return true;
            // }
        }
        
        return false;
    }
};
 

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
    	int N,M,X,Y;
    	cin>>N>>M;
    	vector<vector<int>> Edges;
    	for(int i=0;i<M;i++)
    	{
    		cin>>X>>Y;
    		Edges.push_back({X,Y});
    	}
    	Solution obj;
    	if(obj.check(N,M,Edges)){
    		cout<<"1"<<endl;
    	}
    	else
    	cout<<"0"<<endl;
	}
}  // } Driver Code Ends