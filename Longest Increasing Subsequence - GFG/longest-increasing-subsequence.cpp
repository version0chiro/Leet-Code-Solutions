// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       set<int> s;
       for(int i=0;i<n;i++){
           
           s.insert(a[i]);
       }
       
       int m = s.size();
       
       
       
       int b[m];
       
       int i = 0;
       for(auto a:s){
        //   cout<<a<<" ";
           b[i++]=a;
       }
       
       int t[m+1][n+1];
       
       for(int i=0;i<=m;i++){
           t[i][0]=0;
       }
       
       for(int i=0;i<=n;i++){
           t[0][i]=0;
       }
       
       for(int i=1;i<=m;i++){
           for(int j=1;j<=n;j++){
               if(b[i-1]==a[j-1]){
                   
                   t[i][j]=1+t[i-1][j-1];
               }else{
                   t[i][j]=max(t[i-1][j],t[i][j-1]);
               }
           }
       }
       
       return t[m][n];
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends