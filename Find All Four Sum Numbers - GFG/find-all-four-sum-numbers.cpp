// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        
        
        set<vector<int>> ansS;
        
        vector<vector<int>> ans;
        
        for(int i=0;i<arr.size()-2;i++){
            for(int j=i+1;j<arr.size()-1;j++){
                int l = j+1;
                int r= arr.size()-1;
                
                while(l<r){
                    int sum = arr[l]+arr[r]+arr[i]+arr[j];
                    if(sum==k){
                        // ansS.isnert({arr[i],arr[j],arr[l],arr[r]});
                        vector<int> temp{ arr[i], arr[j], arr[l],arr[r] };
                        ansS.insert(temp);
                        // cout<<arr[i]<<" "<<arr[j]<<" "<<arr[l]<<" "<<arr[r]<<"\n";
                        // cout<<i<<" "<<j<<" "<<l<<" "<<r<<"\n";
                        // cout<<"found \n";
                        l++;
                        // r--;
                    }
                    
                    else if(sum<k){
                        l++;
                    }
                    else 
                        r--;
                }
            }
        }
        
        for(auto a:ansS){
            ans.push_back(a);
        }
        
        return  ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends