// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    public:
    
    int subsequenceCount(string S, string T)
    {
      int n = S.size();
      int m = T.size();
      
      int  t[n+1][m+1];
      
      int mod=1000000007;

      
      memset(t,0,sizeof(t));
      
      for(int i=0;i<=n;i++){
          t[i][0]=1;
      }
      
      for(int i=1;i<=n;i++){
          for(int j=1;j<=m;j++){
              if(S[i-1]!=T[j-1]){
                  t[i][j]=t[i-1][j];
              }else{
                  t[i][j]=(t[i-1][j-1]+t[i-1][j])%mod;
              }
          }
      }
      
    //   for(int i=0;i<=n;i++){
    //       for(int j=0;j<=m;j++){
    //           cout<<t[i][j]<<" ";
    //       }
    //       cout<<endl;
    //   }
      
      return t[n][m]%mod;
      
    }
};
 


// { Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}  // } Driver Code Ends