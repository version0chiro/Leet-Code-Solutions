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
        
        while(st.size()!=1){
            auto first = st.top();
            st.pop();
            auto second = st.top();
            st.pop();
            if(M[first][second]){
                st.push(second);
            }else{
                st.push(first);
            }
        }
        
        auto potentialCeleb = st.top();
        int c = 0;
        
        for(int i=0;i<n;i++){
            if(i!=potentialCeleb){
                if(M[i][potentialCeleb]) c++;
                if(M[potentialCeleb][i]) return -1;
                
            }
        }
        
        if(c==n-1)
            return potentialCeleb;
            
        return -1;
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