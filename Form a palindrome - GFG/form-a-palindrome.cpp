// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int countMin(string str){
    //complete the function here
        string str2 = str;
        reverse(str2.begin(),str2.end());
        
        int s = str.size();
        
        int t[s+1][s+1];
        
        for(int i=0;i<s+1;i++){
            t[i][0]=0;
        }
        
        for(int i=0;i<s+1;i++){
            t[0][i]=0;
        }
        
        for(int i=1;i<s+1;i++){
            for(int j=1;j<s+1;j++){
                if(str[i-1]==str2[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                }else{
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        
        return s-t[s][s];
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}

  // } Driver Code Ends