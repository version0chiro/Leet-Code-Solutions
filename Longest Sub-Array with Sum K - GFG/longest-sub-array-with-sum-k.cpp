// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int p  = 0;
        unordered_map<int,int> m;
        m.insert({0,-1});
        
        int len = 0;
        
        for(int  i=0;i<N;i++){
            p+=A[i];
            if(m.find(p-K)!=m.end()){
                len=max(len,i-m[p-K]);
            }
            
            if(m.find(p)==m.end()){
                m[p]=i;
            }
        }
        
        return len;
    } 

};

// { Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends