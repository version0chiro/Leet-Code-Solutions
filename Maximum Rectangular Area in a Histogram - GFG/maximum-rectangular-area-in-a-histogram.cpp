// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<long long> left,right,w;
        
        stack<long long> st;
        
        for(int i=0;i<n;i++){
            
            while(st.size() && arr[st.top()]>=arr[i]) st.pop();
            
            if(st.size()==0) left.push_back(-1);
            else left.push_back(st.top());
            
            st.push(i);
        }
        
        while(st.size()) st.pop();
        
        for(int i=n-1;i>=0;i--){
            while(st.size() && arr[st.top()]>=arr[i]) st.pop();
            
            if(st.size()==0) right.push_back(n);
            
            else right.push_back(st.top());
            
            st.push(i);
        }
        
        long long ans = INT_MIN;
        
        
        for(int i=0;i<n;i++){
            // w.push_back(left[i]+right[n-i-1]);
            ans=max(ans,(right[n-i-1]-left[i]-1)*arr[i]);
            
        }
        
        return ans;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends