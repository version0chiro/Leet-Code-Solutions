// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        
        for(auto a:x){
            if(a=='(' || a=='{' || a=='['){
                st.push(a);
            }
            
            else if(a==')'){
                if(st.size()==0 || st.top()!='(') return false;
                
                else st.pop();
            }
            
            else if(a==']'){
                if(st.size()==0 || st.top()!='[') return false;
                
                else st.pop();
            }
            else if(a=='}'){
                if(st.size()==0 || st.top()!='{') return false;
                
                else st.pop();
            }
        }
        
        
        return st.size()==0;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends