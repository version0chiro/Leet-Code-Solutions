// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:


    
    string decodedString(string s){
        // code here
        stack<int> sI;
        
        stack<string> s1;
        
        string ans = "";
        
        string temp = "";
        
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                int tempN = 0;
                while(isdigit(s[i])){
                    int sInt = s[i]-'0';
                    tempN=tempN*10+sInt;
                    i++;
                }
                sI.push(tempN);
                
            }
            if(s[i]=='[' ){
                if( temp!=""){
                    s1.push(temp);
                    temp="";
                }
            }
            else if(s[i]==']'){
                string temp1 = "";
                for(int i=0;i<sI.top();i++){
                    temp1=temp1+temp;
                    
                }
                temp=temp1;
                if(s1.size()){
                    temp=s1.top()+temp;
                    s1.pop();
                }
                sI.pop();
            }
            else{
                temp=temp+s[i];
            }}
            
            
            return temp;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends