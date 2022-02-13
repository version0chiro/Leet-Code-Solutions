// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int mxl[n],mxr[n];
        long long total=0;
        
        mxl[0]=arr[0],mxr[n-1]=arr[n-1];
        
        stack<int> st;
        
        for(int i=1;i<n;i++){
            mxl[i]=max(mxl[i-1],arr[i]);
        
        }
        
        for(int i=n-2;i>=0;i--){
            mxr[i]=max(mxr[i+1],arr[i]);
        }
        
        for(int i=0;i<n;i++){
            // cout<<mxl[i]<<" "<<mxr[i]<<" "<<arr[i]<<"\n";
            total+=max(min(mxl[i],mxr[i])-arr[i],0);
        }
        
        return total;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends