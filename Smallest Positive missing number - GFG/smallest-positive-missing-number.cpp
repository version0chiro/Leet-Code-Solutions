// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        bool oneFound = false;
        
        for(int i=0;i<n;i++){
            if(arr[i]==1) oneFound=true;
            
            if(arr[i]>n || arr[i]<1) arr[i]=1;
        }
        
        if(oneFound==false){
            // cout<<" no found";
            return 1;
            
        }
        
        for(int i=0;i<n;i++){
            int id = abs(arr[i]);
            arr[id-1]=-abs(arr[id-1]);
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]>0) return i+1;
        }
        
        return n+1;
    } 
};

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends