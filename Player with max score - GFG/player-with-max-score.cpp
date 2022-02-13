// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int dp[1002][1002];
    
    int solve(int i,int arr[],int j){
        
        if(i>j) {
            dp[i][j]=0;
            return 0;
        }
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int left = arr[i] + min(solve(i+2,arr,j),solve(i+1,arr,j-1));
        int right = arr[j] + min(solve(i+1,arr,j-1),solve(i,arr,j-2));
        
        dp[i][j]=max(left,right);
        
        return max(left,right);
        
        
    }

    bool is1winner(int N,int arr[]) {
        
        
        memset(dp,-1,sizeof(dp));
        
        int sum = 0;
        
        for(int i=0;i<N;i++) sum+=arr[i];
        
        int p1=solve(0,arr,N-1);
        
        
        
        return sum/2<p1;
        
        // code here
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, X;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.is1winner(N, arr) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends