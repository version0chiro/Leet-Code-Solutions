// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int makeProductOne(int arr[], int N) {
        // code here
        int count = 0;
        
        int zCount=0;
        int nCount = 0;
        
        for(int i=0;i<N;i++){
            if(arr[i]==0) zCount++;
            if(arr[i]>0){
                count+=arr[i]-1;
            }else{
                count+=abs(arr[i]+1);
                nCount++;
            }
        }
        if(nCount&1){
            if(zCount==0)
                count+=2;
        }
        
        return count;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.makeProductOne(arr,N) << endl;
    }
    return 0;
}  // } Driver Code Ends