// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
        stack<char> st;
        
        for(int i=0;i<s.size();i++){
            // cout<<i<<" ";
            // if(st.size())
            // cout<<st.top()<<" ";
            if(s[i]=='(' || s[i]==')'){
                if(s[i]=='('){
                    st.push(s[i]);
                }else{
                    if(st.size()==0 || st.top()!='(')
                        return false;
                    else
                        st.pop();
                }
            }
            if(s[i]=='[' || s[i]==']'){
                if(s[i]=='['){
                    st.push(s[i]);
                }else{
                    if(st.size()==0 || st.top()!='[')
                        return false;
                    else
                        st.pop();
                }
            }
            if(s[i]=='{' || s[i]=='}'){
                if(s[i]=='{'){
                    st.push(s[i]);
                }else{
                    if(st.size()==0 || st.top()!='{')
                        return false;
                    else
                        st.pop();
                }
            }
        }
        
        // cout<<st.size()<<"\n";
        
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