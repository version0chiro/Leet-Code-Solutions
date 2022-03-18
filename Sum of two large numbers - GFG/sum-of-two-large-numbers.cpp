// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string findSum(string X, string Y) {
        // Your code goes here
        string ans = "";
        
        int i=X.size()-1;
        int j = Y.size()-1;
        
        int carry =0;
        
        while(i>=0 && j>=0){
            
            int dig1 = X[i]-'0';
            int dig2 = Y[j]-'0';
            
            int Tsum = dig1+dig2+carry;
            
            char addChar = (char)('0'+Tsum%10);
            
            // cout<<addChar<<" = \n";
            
            ans.push_back(addChar);
            
            carry = Tsum/10;
            
            i--;
            j--;
        }
        
        while(i>=0){
            int dig1 = X[i]-'0';
            
            int Tsum = dig1+carry;
            
            char addChar = (char)('0'+Tsum%10);
            
            // cout<<addChar<<" = \n";
            
            ans.push_back(addChar);
            
            carry = Tsum/10;

            
            i--;
        }
        
          while(j>=0){
            int dig1 = Y[j]-'0';
            
            int Tsum = dig1+carry;
            
            char addChar = (char)('0'+Tsum%10);
            
            // cout<<addChar<<" = \n";
            
            ans.push_back(addChar);
            
            carry = Tsum/10;

            
            j--;
        }
        
        if(carry>0){
            ans.push_back((char)('0'+carry));
        }
        
        reverse(ans.begin(),ans.end());
        
        int start=0;
        
        for(;start<ans.size()-1;start++){
            if(ans[start]!='0') break;
        }
        
        // cout<<start<<" \n";
        
        ans=ans.substr(start,ans.size()-start);
        
        
        return ans;
    }
};

// { Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}  // } Driver Code Ends