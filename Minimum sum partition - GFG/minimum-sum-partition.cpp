// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
  
  
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    
	    int totalSum =0;
	    
	    for(int i=0;i<n;i++){
	        totalSum+=arr[i];
	    }
	    int tSum=totalSum;
	    totalSum=totalSum/2;
	    
	    bool t[n+1][totalSum+1];
	    
	    memset(t,0,sizeof(t));
	    
	    for(int i=0;i<n+1;i++){
	        t[i][0]=1;
	        
	    }
	    
	    for(int i=0;i<totalSum+1;i++){
	        t[0][i]=0;
	    }
	    
	    t[0][0]=1;
	    
	    for(int i=1;i<n+1;i++){
	        for(int j=1;j<totalSum+1;j++){
	            
	            if(arr[i-1]<=j){
	                t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
	            }else{
	                t[i][j]=t[i-1][j];
	            }
	            
	        }
	    }
	    
	    int k;
	    
	    int s1=0;
	    
	    for(k=totalSum;k>=0;k--){
	        if(t[n][k]){
	           s1=k;
	           break;
	        }
	    }
	    
	    
	    int s2 = tSum-s1;
	    
	    
	    
	    
	    return abs(s1-s2);
	    
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
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends