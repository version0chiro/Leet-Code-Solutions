// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    vector<string> ans;
    void solve(vector<vector<int>> &g,int i,int j,string temp){
        if(i>=g.size() || j>=g[0].size() || i<0 || j<0 || g[i][j]==0) return;
        
        if(i==g.size()-1 && j==g[0].size()-1){
            ans.push_back(temp);
            return;
        }
        
        g[i][j] = 0;
        
        solve(g,i+1,j,temp+'D');
        solve(g,i-1,j,temp+'U');
        solve(g,i,j+1,temp+'R');
        solve(g,i,j-1,temp+'L');
        
        g[i][j]=1;
        
        
    }
    vector<string> findPath(vector<vector<int>> &g, int n) {
        solve(g,0,0,"");
        
        sort(ans.begin(),ans.end());
        
        return ans;
        // Your code goes here
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends