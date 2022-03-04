// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int canReach(int A[], int N) {
        // code here
        int maxReach = A[0];
        
        int jumps = 1;
        
        int currC = A[0];
        
        for(int i=1;i<N;i++){
            if(i==N-1) return 1;
            maxReach=max(maxReach,A[i]+i);
            
            currC--;
            
            if(currC==0){
                // cout<<maxReach<<" "<<i<<"\n";
                if(maxReach-i<=0) return 0;
                jumps++;
                currC=maxReach-i;
            }
            
        }
        
        return 1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}  // } Driver Code Ends