// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        int opening = 0;
        int closing = 0;
        
        int res = 0;
        int count =0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                closing++;
            }
             if(s[i]=='('){
                opening++;
            }
            
            if(opening==closing){
                res=max(res,2*opening);
            }
            
            if(closing>opening){
                opening=closing=0;
            }
            
        }
        
        opening=closing=0;
        
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==')'){
                closing++;
            }
             if(s[i]=='('){
                opening++;
            }
            
            if(opening==closing){
                res=max(res,2*opening);
            }
            
            if(opening>closing){
                opening=closing=0;
            }
        }
        
        return res;
    }
    
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends