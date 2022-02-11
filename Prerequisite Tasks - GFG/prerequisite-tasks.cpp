// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    vector<int> adj[N];
	    
	    int indegree[N] = {0};
	    
	    for(auto a:prerequisites){
	        adj[a.second].push_back(a.first);
	        indegree[a.first]++;
	    }
	    
	    int done=0;
	    
	    queue<int> q;
	    
	    for(int i=0;i<N;i++){
	        if(indegree[i]==0){
	            q.push(i);
	            done++;
	            
	        }
	    }
	    
	    
	    
	    while(q.size()){
	        auto temp = q.front();
	        q.pop();
	       // cout<<temp<<":";
	        for(auto a:adj[temp]){
	            
	           // cout<<a<<" ";
	            indegree[a]--;
	            
	            if(indegree[a]==0){
	                q.push(a);
	                done++;
	            }
	        }
	       // cout<<endl;
	        
	        
	    }
	   // cout<<done<<" done \n";
	    if(done==N) return 1;
	    return 0;
	    
	    
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