// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        int buyI = 0;
        int sellI = -1;
        
        vector<vector<int>> ans;
        
        for(int i=1;i<n;i++){
            if(A[i-1]>A[i]){
                // sellI=i-1;
                if(sellI>buyI){
                    
                vector<int> temp{buyI,sellI};
                ans.push_back(temp);
                buyI=i;
                continue;
                }
            }else{
                sellI=i;
            }
            if(A[i]<A[buyI]){
                buyI=i;
            }
        }
        
        vector<int> temp{buyI,sellI};
        
        if(A[sellI]-A[buyI]>0 && sellI>buyI)
            ans.push_back(temp);
        
        
        // cout<<endl;
        
        // cout<<buyI<<" "<<sellI<<"\n";
        
        // for(auto a:ans){
        //     cout<<a[0]<<" "<<a[1]<<"\n";
        // }
        
        
    return ans;
    }
    
};

// { Driver Code Starts.

int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for(int i=0; i<ans.size(); i++)
        c += A[ans[i][1]]-A[ans[i][0]];
    return (c==p) ? 1 : 0;
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        int p = 0;
        for(int i=0; i<n-1; i++)
        {
            int x = A[i+1]-A[i];
            if(x>0)
                p += x;
        }
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            cout<<check(ans,A,p);
        }cout<<endl;
    }
    return 0;
}

  // } Driver Code Ends