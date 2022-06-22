// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template 

class Solution{
  public:
  
    int M = 1e9+7;
    // s : given string
    // return the expected answer
    int fun(string &s) {
        //code here
        int a = 0,b=0,c=0;
        
        for(auto t:s){
            if(t=='a'){
                a=(1+(2*a)%M)%M;
                
                
            }
            
            else if(t=='b'){
                b=(a+(2*b)%M)%M;
            }
            
            else{
                c=(b+(2*c)%M)%M;
            }
            
            
        }
        
        return c%M;
        
        
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