// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        
        if(n==1) return 0;
        
        if(arr[0]==0) return -1;
        // Your code here
        int j =1;
        
        int maxReach = arr[0];
        
        int currReach = arr[0];
            
        int i=1;
        
        while(i<n){
            if(i==n-1) return j;
            
            currReach--;
            maxReach=max(maxReach,arr[i]+i);
            
            if(currReach<=0){
                
                if(maxReach<=i){
                    return -1;
                }
                currReach = maxReach-i;
                j++;
            }
            
            i++;
        }
        
        
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
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends