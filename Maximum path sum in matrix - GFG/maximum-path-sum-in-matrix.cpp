// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    unordered_map<string,int> m;
    int solve(int i,int j,int N,vector<vector<int>> &Matrix){
        if(i<0 || j<0 || i>=N || j>=N || Matrix[i][j]<0) return INT_MIN;
        
        if(i==N-1) return Matrix[i][j];
        
        
        
        string key = to_string(i)+"_"+to_string(j);
        
        if(m.find(key)!=m.end()) return m[key];
        
        int curr = Matrix[i][j];
        
        // Matrix[i][j]= -1;
        
        int down = solve(i+1,j,N,Matrix);
        int down_L = solve(i+1,j-1,N,Matrix);
        int down_R = solve(i+1,j+1,N,Matrix);
        // int right = solve(i,j+1,N,Matrix);
        
        // Matrix[i][j] = 1;
        
        // cout<<i<<" "<<j<<" : "<<down<<" "<<down_L<<" "<<down_R<<" "<<right<<" \n";
        
        int temp = curr + max(down,max(down_L,down_R));
        
        m[key]=temp;
        
        return m[key];
        
    }
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        int ans = INT_MIN;
        for(int j=0;j<N;j++){
            ans=max(ans,solve(0,j,N,Matrix));
        }
        
        return ans;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}  // } Driver Code Ends