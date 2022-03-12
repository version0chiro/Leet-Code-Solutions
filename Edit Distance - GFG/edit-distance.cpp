// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int editDistance(string s, string s2) {
        // Code here
        
        int n = s.size();
        int m = s2.size();
        
        int t[n+1][m+1];
        
        memset(t,0,sizeof(t));
        
        for(int i=0;i<=n;i++){
            t[i][0]=i;
        }
        
        for(int j=0;j<=m;j++){
            t[0][j]=j;
        }
        
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==s2[j-1]){
                    t[i][j]=t[i-1][j-1];
                }
                
                else{
                    t[i][j]=1+min(t[i-1][j],min(t[i][j-1],t[i-1][j-1]));
                }
            }
        }
        
        return t[n][m];
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends