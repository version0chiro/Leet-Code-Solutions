// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        deque<int> d;

        
        for(int i=0;i<k;i++){
            while(d.size() && arr[i]>=arr[d.back()]){
                d.pop_back();
            }
            
            d.push_back(i);
        }
        
        vector<int> ans;
        
        ans.push_back(arr[d.front()]);
        
        for(int i=k;i<n;i++){
            while(d.size() && d.front()<=i-k) d.pop_front();
            while(d.size() && arr[i]>=arr[d.back()]){
                d.pop_back();
            }
            
            d.push_back(i);
            
            ans.push_back(arr[d.front()]);
            
        }
        
        // for()
        return ans;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}  // } Driver Code Ends