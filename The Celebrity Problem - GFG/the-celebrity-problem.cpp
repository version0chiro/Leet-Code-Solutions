// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> st;
        
        for(int i=0;i<n;i++){
            st.push(i);
        }
        
        while(st.size()>1){
            auto f = st.top();
            st.pop();
            auto s = st.top();
            st.pop();
            
            if(M[f][s] ) st.push(s);
            
            else  st.push(f);
            
            // else if(!M[f][s] && !M[s][f]) st.push(f),st.push(s);
            
            
        } 
        
        if(st.size()==0) return -1;
        
        int poC = st.top(); 
        st.pop();
        
        for(int i=0;i<n;i++){
            if((i!=poC) && (M[poC][i] || !M[i][poC])) return -1;
        }
        
        return poC;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends