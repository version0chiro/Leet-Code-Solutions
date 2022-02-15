// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

// 
class Solution
{
    public:
    //Function to find the largest number after k swaps.
    void solve(string str,int k,string &ans,int curr){
        if(k==0) return;
        
        
        
        int n = str.size();
        
        int maxi = str[curr];
        
        for(int i=curr+1;i<n;i++){
            if(maxi<str[i])
                maxi=str[i];
        }
        
        if(maxi!=str[curr]) k--;
        
        
        
        for(int j=n-1;j>=curr;j--){
            if(str[j]==maxi){
                swap(str[curr],str[j]);
                if(str.compare(ans)>0) ans=str;
                
                solve(str,k,ans,curr+1);
                
                swap(str[curr],str[j]);
                
            }
            
            
        }
    }
    string findMaximumNum(string str, int k)
    {
       // code here.
       string ans = str;
       
       solve(str,k,ans,0);
       
       return ans;
       
    }
};

// { Driver Code Starts.

int main()
{
    int t, k;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> k >> str;
        Solution ob;
        cout<< ob.findMaximumNum(str, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends