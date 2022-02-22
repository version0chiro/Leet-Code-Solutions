// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int m = 1000000007;
    int countWays(int n)
    {
        // your code here
        long long f1 = 1;
        long long  f2 = 1;
        
        for(long long i=2;i<=n;i++){
            long long temp = (f1+f2)%m;
            f1=f2;
            f2=temp;
        }
        
        return f2%m;
    }
};



// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
  // } Driver Code Ends