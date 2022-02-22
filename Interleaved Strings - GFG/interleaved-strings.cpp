// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    unordered_map<string,bool> m;
    bool solve (string A,string B,string D,string C,int i,int j){
        if(C.size()==D.size() && D!=C) return false;
        
        // cout<<D<<"\n";
        
        string key = D+" "+to_string(i)+" "+to_string(j);
        
        if(m.find(key)!=m.end()) return m[key];
        
        if(D==C) {
            m[key]=true;
            return true;
        }
        
        if(D.size()<C.size()){
            D+=A[i];
            bool f,s;
            if(D[i+j]!=C[i+j]) 
                f=false;
            else
                f = solve(A,B,D,C,i+1,j);
                
                
            D.pop_back();
            
            
            D+=B[j];
            
            if(D[i+j]!=C[i+j])
                s=false;
            else s = solve(A,B,D,C,i,j+1);
            
            m[key]=f||s;
            
            return m[key];
        }
        else{
            m[key]=false;
            return false;
        }
        
    }
    
    bool isInterleave(string A, string B, string C) 
    {
        //Your code here
        return solve(A,B,"",C,0,0);
          
    }

};

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,c;
		cin>>a;
		cin>>b;
		cin>>c;
		Solution obj;
		cout<<obj.isInterleave(a,b,c)<<endl;
	}
	// your code goes here
	return 0;
}  // } Driver Code Ends