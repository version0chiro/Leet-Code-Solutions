// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

 // } Driver Code Ends
// #define ll long long
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        
        const unsigned int M = 1000000007;

        // code here
        
        
        vector<ll> temp;
        vector<ll> temp2;
        
        
        temp.push_back(1);
        
        if(n==1) return temp;
        
        for(ll i=1;i<=n;i++){
            
            temp2.clear();
            
            temp2.push_back(1);

            // for(int j=1;j<i-1;i++){
            //     // int tempI = temp[j-1]+temp[j];
            //     // temp2.push_back(tempI);
            //     cout<<"exe c \n";
            // }
            
            for(ll j=1;j<i-1;j++){
                ll tempI = temp[j-1]+temp[j];
                temp2.push_back(tempI%M);
                // cout<<" exxce c \n";
            }
            
            temp2.push_back(1);
            
            temp=temp2;
        }
        
        return temp2;
    }
};


// { Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}
  // } Driver Code Ends