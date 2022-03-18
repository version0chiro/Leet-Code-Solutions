// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int totalSum=0;
	    
	    for(int i=0;i<n;i++){
	        totalSum+=arr[i];
	        
	        
	    }
	    
	    int sum = totalSum/2;
	    
	    int t[n+1][sum+1];
	    
	    for(int i=0;i<=n;i++){
	        t[i][0]=1;
	    }
	    
	    for(int i=0;i<=sum;i++){
	        t[0][i]=0;
	    }
	    
	    t[0][0]=1;
	    
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=sum;j++){
	            if(arr[i-1]<=j){
	                t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
	            }else{
	                t[i][j]=t[i-1][j];
	            }
	        }
	    }
	    
	   // for(int i=0;i<=n;i++){
	   //     for(int j=0;j<=sum;j++){
	   //         cout<<t[i][j]<<" ";
	   //     }
	   //     cout<<"\n";
	   // }
	    int s1;
	    for(int i=sum;i>=0;i--){
	        if(t[n][i]){
	           s1= i;
	           break;
	        }
	    }
	    
	    int s2 = totalSum-s1;
	    
	    return abs(s1-s2);
	    
	    return -1;
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