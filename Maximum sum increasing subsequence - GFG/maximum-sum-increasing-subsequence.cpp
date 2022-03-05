// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    set<int> s;
	    
	    for(int i=0;i<n;i++){
            s.insert(arr[i]);
	    }
	    
	    vector<int> arr2;
	    for(auto a:s){
	        arr2.push_back(a);
	       // cout<<a<<"\n";
	    }
	    
	    int m = arr2.size();
	    
	    int t[n+1][m+1];
	    
	    for(int i=0;i<=n;i++){
	        t[i][0]=0;
	    }
	    for(int i=0;i<=m;i++)
	        t[0][i]=0;
	        
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=m;j++){
	            if(arr[i-1]==arr2[j-1]){
	                t[i][j]=arr[i-1]+t[i-1][j-1];
	            }else{
	                t[i][j]=max(t[i-1][j],t[i][j-1]);
	            }
	        }
	    }
	    
	    return t[n][m];
	    
	}  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends