// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int j = N-2;
        
        while(j>=0){
            if(arr[j]<arr[j+1]){
                // swap(arr[j],arr[N-1]);
                break;
            }

            j--;
        }
        
        if(j==-1){
            sort(arr.begin(),arr.end());
            return arr;
        }
        
        for(int i=N-1;i>=j;i--){
            if(arr[i]>arr[j]){
                swap(arr[j],arr[i]);
                break;
            }
        }
        
        reverse(arr.begin()+j+1,arr.end());
        
        return arr;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends