// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        // Your code here
        int n = N;
        int rMax[N];
        
        rMax[N-1] = A[N-1];
        
        for(int i=n-2;i>=0;i--){
            rMax[i]=max(rMax[i+1],A[i]);
        }
        
        // for(int i=0;i<N;i++){
            
        //     cout<<rMax[i]<<" ";
        // }
        
        
        int ans  = INT_MIN;
        
        int i=0,j=0;
        
        while(i<n && j<n){
            if(rMax[j]>=A[i]){
                ans = max(ans,j-i);
                j++;
            }else{
                i++;
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
}   // } Driver Code Ends