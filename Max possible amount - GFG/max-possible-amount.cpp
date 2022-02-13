// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	
	int t[1001][1001];
	
	int solve(int arr[],int i,int j){
	    if(i>j) return 0;
	    
	    if(t[i][j]!=-1) return t[i][j];
	    
	    int f1 = arr[i] + min(solve(arr,i+2,j),solve(arr,i+1,j-1));
	    int f2 = arr[j] + min(solve(arr,i+1,j-1),solve(arr,i,j-2));
	    
	    t[i][j]=max(f1,f2);
	    
	    return max(f1,f2);
	    
	}
	
	
	int maxAmount(int arr[], int n)
	{
	    memset(t,-1,sizeof(t));
	    
		int ans = 0;
		
		int sum = 0;
		
		for(int i=0;i<n;i++){
		    sum+=arr[i];
		}
		
		ans = solve(arr,0,n-1);
		
		return ans;
		// Your code goes here

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
	    cout << ob.maxAmount(a, n) << "\n";

	     
    }
    return 0;
}
  // } Driver Code Ends