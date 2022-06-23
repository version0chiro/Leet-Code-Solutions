// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
/*You are required to complete this method*/
    int wildCard(string pattern,string str)
    {
        int n = str.size();
        int m = pattern.size();
        
        vector<vector<bool>> t(n+1,vector<bool> (m+1,false));
        
        
        t[0][0]=true;
        
        for(int j=0;j<m && pattern[j]=='*';j++){
            t[0][j+1]=true;
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(pattern[j-1]=='*'){
                    t[i][j]=t[i-1][j]||t[i][j-1];
                }else if(pattern[j-1]==str[i-1] || pattern[j-1]=='?'){
                    t[i][j]=t[i-1][j-1];
                }
            }
        }
        
        
        return t[n][m];
    }
};

// { Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
           string pat,text;
           cin>>pat;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
           cin>>text;
           Solution obj;
           cout<<obj.wildCard(pat,text)<<endl;
   }
}
  // } Driver Code Ends