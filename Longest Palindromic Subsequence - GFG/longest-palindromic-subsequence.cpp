// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int longestPalinSubseq(string A) {
        //code here
        string B = A;
        reverse(B.begin(),B.end());
        
        int N = A.size();
        
        int t[N+1][N+1];
        
        for(int i=0;i<N+1;i++){
            t[i][0]=0;
            t[0][i]=0;
        }
        
        for(int i=1;i<N+1;i++){
            for(int j=1;j<N+1;j++){
                if(A[i-1]==B[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                }else{
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        
        return t[N][N];
    }
};

// { Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends