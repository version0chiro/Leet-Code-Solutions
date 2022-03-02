// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template 

class Solution{
  public:
          int mod = 1e9+7;

    // s : given string
    // return the expected answer
    int fun(string &s) {
        //code here
        int a=0,b=0,c=0;
        
        for(auto p:s){
            
            if(p=='a'){
                a=(1+(2*a)%mod)%mod;
            }
            
            if(p=='b'){
                b=(a+(2*b)%mod)%mod;
            }
            
            if(p=='c'){
                c=(b+(2*c)%mod)%mod;
            }
        }
        
        return c%mod;
    }
};

// { Driver Code Starts.
 
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.fun(s)<<endl;
    }
	return 0;
}  // } Driver Code Ends