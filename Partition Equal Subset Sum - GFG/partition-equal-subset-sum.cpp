// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        int totalSum = 0;
        
        for(int i=0;i<N;i++){
            totalSum+=arr[i];
            
        }
        
        if(totalSum%2!=0) return 0;
        
        int target_sum = totalSum/2;
        
        bool t[N+1][target_sum+1];
        
        for(int i=0;i<N+1;i++){
            t[i][0]=true;
        }
        
        for(int i=0;i<=target_sum;i++){
            t[0][i]=false;
        }
        
        t[0][0]=true;
        
        for(int i=1;i<N+1;i++){
            for(int j=1;j<target_sum+1;j++){
                if(arr[i-1]<=j){
                    t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
                }else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        
        return t[N][target_sum];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends