// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int lW=arr[0];
        int l = 0;
        int r = n-1;
        int rW = arr[n-1];
        long long total=0;
        
        while(l<r){
            if(arr[r]<arr[l]){
                total+=max(0,rW-arr[r]);
                rW=max(rW,arr[r]);
                r--;
            }else{
                total+=max(0,lW-arr[l]);
                lW=max(lW,arr[l]);
                l++;
                
            }
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