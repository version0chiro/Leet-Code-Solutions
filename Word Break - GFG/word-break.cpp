// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    unordered_map<string,bool> dict;
    bool solve(string A,int i,string temp){
        if(A.size()<=0) return true;
        
        if(i>=A.size()) return false;
        
        // if(i>=0) return true;
        
        // temp+=A[i];
        // cout<<A[i]<<" \n";
        temp=temp+A[i];
        
        if(dict.find(temp)!=dict.end()){
            bool f = solve(A,i+1,temp);
            
            A.erase(0,temp.size());
            
            temp="";
            
            bool s = solve(A,0,temp);
            
            return f||s;
        }else{
            bool s = solve(A,i+1,temp);
            return s;
        }
        
    }
    int wordBreak(string A, vector<string> &B) {
        //code here
        
        for(auto a:B){
            dict[a]=true;
        }
        
        if(solve(A,0,"")) return 1;
        
        return 0;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends