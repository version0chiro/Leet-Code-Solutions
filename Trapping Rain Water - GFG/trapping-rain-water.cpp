// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int l = arr[0],r=arr[n-1];
        
        long long total = 0;
        
        int lp=0,rp=n-1;
        
        while(lp<=rp){
            if(arr[rp]<arr[lp]){
                total = total + max(0,r-arr[rp]);
                r=max(r,arr[rp]);
                rp--;
            }else{
                total = total + max(0,l-arr[lp]);
                l=max(l,arr[lp]);
                lp++;
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