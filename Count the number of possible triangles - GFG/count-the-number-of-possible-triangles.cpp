// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        // code here
        sort(arr,arr+n);
        
        int k=2;
        int ans = 0;
        
        for(int i=0;i<n-2;i++){
            k=i+2;
            for(int j=i+1;j<n-1;j++){
                if(k!=n){
                    while(k<n && arr[k]<(arr[i]+arr[j])){
                        k++;
                    }
                }
                
                ans+=(k-j-1);
            }
        }
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}  // } Driver Code Ends