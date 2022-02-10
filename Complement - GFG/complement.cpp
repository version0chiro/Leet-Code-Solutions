// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    vector<int> findRange(string str, int n) {
        // code here
        int l=0,r;
        int ans_l,ans_r;
        int zC=0;
        int oC=0;
        
        int maxD = 0;
        
        for(int i=0;i<n;i++){
            if(str[i]=='0') zC++;
            else oC++;
            
            
            if(zC<oC){
                l=i+1;
                zC=0,oC=0;
            }else{
                if(zC-oC>maxD){
                    ans_l=l;
                    ans_r=i;
                    maxD = zC-oC;
                }
            }
        }
        if(maxD==0) return {-1};
        
        return {ans_l+1,ans_r+1};
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution ob;
        auto ans = ob.findRange(s, n);

        if (ans.size() == 1) {
            cout << ans[0] << "\n";
        } else {
            cout << ans[0] << " " << ans[1] << "\n";
        }
    }
    return 0;
}  // } Driver Code Ends