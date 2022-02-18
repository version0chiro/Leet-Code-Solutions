// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to return the total number of possible unique BST. 
    int numTrees(int N) 
    {
        // Your code here
        unsigned long int cat[N+1];
        long long mod=1000000007;

        
        cat[0]=cat[1]=1;
        
        for(int i=2;i<=N;i++){
            cat[i]=0;
            long long sum = 0;
            for(int j=0;j<i;j++){
                sum=(sum+(cat[j]*cat[i-j-1])%mod)%mod;
            }
            cat[i]=sum;
        }
        
        return cat[N]%mod;
    }
};

// { Driver Code Starts.
#define mod (int)(1e9+7)
int main(){
    
    //taking total testcases
    int t;
    cin>>t;
    while(t--){
        
        //taking total number of elements
        int n;
        cin>>n;
        Solution ob;
        //calling function numTrees()
        cout<<ob.numTrees(n)<<"\n";
    }
}	  // } Driver Code Ends