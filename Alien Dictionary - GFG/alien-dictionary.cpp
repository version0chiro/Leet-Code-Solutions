// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    
    void DFS(int v,vector<bool> &visited,vector<bool> &vis2,vector<int> adj[],stack<int> &st){
        visited[v]=true;
        vis2[v]=true;
        
        for(auto a:adj[v]){
            if(!visited[a]){
                DFS(a,visited,vis2,adj,st);
            }
        }
        
        st.push(v);
        
        
        vis2[v]=false;
        
        
    }
    
    string findOrder(string dict[], int N, int K) {
        //code here
        vector<int> adj[K];
        
        unordered_map<char,int> m;
        unordered_map<int,char> m2;
        
        int marker = 0;
        
        for(int i=0;i<N;i++){
            for(auto a:dict[i]){
                if(m.find(a)!=m.end()){
                    continue;
                }
                m[a]=marker;
                m2[marker]=a;
                marker++;
            }
        }
        
        for(int i=1;i<N;i++){
            int j=0;
            // int sizeToCompare = min(dict[i][j])
            while(j<(int)dict[i].size() && j<(int)dict[i-1].size() && dict[i][j]==dict[i-1][j]){
                j++;
            }
            
            adj[m[dict[i-1][j]]].push_back(m[dict[i][j]]);
        }
        
        stack<int> topo;
        
        vector<bool> visited(K+1,false);
        
        vector<bool> visited2(K+1,false);
        
        for(int i=0;i<K;i++){
            if(!visited[i]){
                DFS(i,visited,visited2,adj,topo);
            }
        }
        
        string ans = "";
        
        while(topo.size()){
            ans+=m2[topo.top()];
            topo.pop();
        }
        
        return ans;
    }
};

// { Driver Code Starts.
string order;
bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size()) return a.size() < b.size();

    return p1 < p2;
}

// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++) cin >> dict[i];
        
        Solution obj;
        string ans = obj.findOrder(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++) order += ans[i];

        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);

        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i]) f = false;

        if(f)cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends