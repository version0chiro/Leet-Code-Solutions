// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int>> ans;
    // set<vector<int>> sAns;
    // bool t[101][31];
    void solve(vector<int> &A,int B,int i,vector<int> temp){
        if(B==0){
            // sort(temp.begin(),temp.end());
            ans.push_back(temp);
            return;
        }
        
        if(B<=0 ){
            return;
        }
        
        for(int p=i;p<A.size();p++){
            if(p>i && A[p]==A[p-1]) continue;
            
            if(A[p]<=B){
                temp.push_back(A[p]);
                solve(A,B-A[p],p,temp);
                temp.pop_back();
            }
        }
        return;
    }
        
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        // memset(t,false,sizeof(t));
        sort(A.begin(),A.end());
        solve(A,B,0,{});
        
        // sort(ans.begin(),ans.end());
        
        // for(auto a:sAns){
        //     ans.push_back(a);
        // }
        
        return ans;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	  // } Driver Code Ends