// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    bool knows(int i,int j,vector<vector<int>> &M){
        if(M[i][j]) return true;
        
        return false;
    }
    
    int solve(int n,vector<vector<int>>& M){
        if(n==0){
            return -1;
        }
        
        int id = solve(n-1,M);
        
        if(id==-1) return n-1;
        
        if(knows(id,n-1,M)) return n-1;
        
        if(knows(n-1,id,M)) return id;
        
        return -1;
    }
    
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        
        int id = solve(n,M);
        
        if(id==-1) return id;
        
        
        int c1=0,c2=0;
        
        for(int i=0;i<n;i++){
            if(i!=id){
                c1+=knows(id,i,M);
                c2+=knows(i,id,M);
            }
        }
        
        if(c1==0 && c2==n-1) return id;
        
        
        
        return -1;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends