// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int t[1001][1001];
    int solve(int W,int wt[],int val[],int n){
        if(n==0 || W==0) return 0;
        
        if(t[W][n]!=-1) return t[W][n];
        
        if(W>=wt[n-1]){
            int f = solve(W-wt[n-1],wt,val,n-1)+val[n-1];
            int s = solve(W,wt,val,n-1);
            t[W][n]=max(f,s);
            return t[W][n];
        }else{
            int s = solve(W,wt,val,n-1);
            t[W][n]=s;
            return t[W][n];
        }
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
    //   memset(t,-1,sizeof(t));
    //   return solve(W,wt,val,n);
    
        int t[W+1][n+1];
        
        for(int i=0;i<=n;i++){
            t[0][i]=0;
        }
        
        for(int i=0;i<=W;i++){
            t[i][0]=0;
        }
        
        for(int i=1;i<=W;i++){
            for(int j=1;j<=n;j++){
                if(i>=wt[j-1]){
                    t[i][j]=max(t[i-wt[j-1]][j-1]+val[j-1],t[i][j-1]);
                }else{
                    t[i][j]=t[i][j-1];
                }
            }
        }
        
        return t[W][n];
       
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends