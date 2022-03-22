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
        int maxA[N];
        
        maxA[N-1]=A[N-1];
        
        for(int i=N-2;i>=0;i--){
            maxA[i]=max(maxA[i+1],A[i]);
        }
        
        
        int i=0,j=0;
        
        int ans = INT_MIN;
        
        while(i<N && j<N){
            if(A[i]<=maxA[j]){
                ans = max(j-i,ans);
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