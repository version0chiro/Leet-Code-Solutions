// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        unordered_map<int,pair<int,int>> m;
        
        for(int i=n-1;i>=0;i--){
            if(m.find(arr[i])!=m.end()){
                m[arr[i]]={m[arr[i]].first+1,i};
            }else{
                m[arr[i]]={1,i};
            }
        }
        
        // for(auto p:m){
        //     cout<<p.first<<" ";
        //     cout<<p.second.first<<" "<<p.second.second<<" \n";
        // }
        
        
        for(int i=0;i<n;i++){
            if(m[arr[i]].first>1){
                return i+1;
            }
        }
        
        return -1;
    }
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}
  // } Driver Code Ends