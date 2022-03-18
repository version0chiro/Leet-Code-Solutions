// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    vector<int> indegree(N);

	    vector<int> adj[N];
	    
	    for(auto a:prerequisites){
	        adj[a.second].push_back(a.first);
	        indegree[a.first]++;
	    }
	    
	    queue<int> q;
	    
	    int done =0;
	    
	    
	    for(int i=0;i<indegree.size();i++){
	        if(indegree[i]==0){
	            q.push(i);    
	            done++;
	        }
	    }
	    
	    while(q.size()){
	        auto top = q.front();
	        q.pop();
	       // vis[top]=true;
	        for(auto a:adj[top]){
	            indegree[a]--;
	            if(indegree[a]==0){
	               // if(vis[a]==false)
	                    done++;
	                    q.push(a);
	                 
	            }
	        }
	    }
	    
	    if(done==N) return true;
	    
	    return false;
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}  // } Driver Code Ends