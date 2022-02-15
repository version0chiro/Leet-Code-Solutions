// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    
    
    
    void solve(vector<int>& arr,int n,int i){
        if(i>=n) return;
        if(i<n-1){
            swap(arr[i],arr[i+1]);
            solve(arr,n,i+2);
        }
    }
    
    void convertToWave(vector<int>& arr, int n){
    
        // Your code here
        solve(arr,n,0);
        
        return;
        
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        vector<int> a(n); //declare vector of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        Solution ob;
        ob.convertToWave(a, n);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array
            
        cout<<endl;
    }
}  // } Driver Code Ends