// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	
    	// two pointers one for the arrival and one for dept, sort both the arrays and make one platform as the first train will need that
    	// if arr[i]<=dep[j] means the next bus needs a new plat form so counter++, move to the next arrival (i++)
        // if arr[i]>dep[j] means the next bus will come after the previous has left, so one platform less needed counter-- move to the next departure (j++)
        
        // at each point find max of counter
    	int i =1,j=0;
    	
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	int c = 1;
    	int ans =1;
    	
    	while(i<n && j<n){
    	    if(arr[i]<=dep[j]){
    	        c++;
    	        i++;
    	    }
    	    
    	    else if(arr[i]>dep[j]){
    	        c--;
    	        j++;
    	    }
    	    
    	    ans=max(c,ans);
    	    
    	}
    	
    	return ans;
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends