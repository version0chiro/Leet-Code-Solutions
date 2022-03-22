// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        // add code here.
        int i=0;
        int j=0;
        
        while(i<n){
            // cout<<a[i]<<" "<<b[j]<<" \n";
            if(a[i]!=b[j]){
                return i;
            }else{
                i++;
                j++;
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
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        Solution obj;
        cout << obj.findExtra(a, b, n) << endl;
    }
}  // } Driver Code Ends