// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here 
            sort(arr,arr+n);
            
            int l = 0,r=n-1;
            
            int ans = INT_MAX;
            
            while(l<r){
                int temp = arr[l]+arr[r];
                
                if(temp==0) return 0;
                
                if(temp<0) l++;
                
                else r--;
                
                if(abs(temp)<abs(ans)){
                    ans=temp;
                }
                if(abs(temp)==abs(ans)){
                    ans = max(ans,temp);
                    }
                
                
            }
            
            return ans;
            
        }
};

// { Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}  // } Driver Code Ends