// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int lW = arr[0];
        int rW = arr[n-1];
        
        int lP = 0;
        int rP = n-1;
        
        long long total = 0;
        
        while(lP<rP){
            // cout<<rP<<" "<<lP<<"\n";
            if(arr[rP]<arr[lP]){
                total+=max(0,rW-arr[rP]);
                rW=max(rW,arr[rP]);
                rP--;
            }else{
                total+=max(0,lW-arr[lP]);
                lW=max(lW,arr[lP]);
                lP++;
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