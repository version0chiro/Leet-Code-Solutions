// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        long long sum = 0;
        
        int l = 0;
        int r = 0;
        
        while(l<n && r<n){
            sum+=arr[r];
            
            if(sum==s){
                vector<int> ans(2,0);
                
                ans[0]=l+1;
                ans[1]=r+1;
                
                return ans;
            }
            
            while(sum>s){
                sum-=arr[l];
                l++;
            }
            
            if(sum==s){
                vector<int> ans(2,0);
                
                ans[0]=l+1;
                ans[1]=r+1;
                
                return ans;
            }
            
            r++;
            
            
        }
        
        return {-1};
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends