// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int closest3Sum(int A[], int N, int X)
    {
        // -1 2 1 -4
        //  | 
        // code here
        sort(A,A+N);
        
        // int ans=0;
        int ans = INT_MAX;
        
        for(int i=0;i<N;i++){
            int l=i+1;
            int r=N-1;
            while(l<r){
                int sum = A[i]+A[l]+A[r];
                if(abs(X-sum)<abs(X-ans)){
                    // dist=X-sum;
                    ans=sum;
                }
                
                if(sum==X) {
                    // cout<<A[i]<<" "<<A[l]<<" "<<A[r]<<" "<<sum<<" "<<X<<"\n";
                    return X;
                }
                
                if(sum<X){
                    l++;
                }else if(sum>X){
                    r--;
                }
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int X;
        cin>>X;
        Solution obj;
        cout<<obj.closest3Sum(Arr, N, X)<<endl;
    }
    return 0;
}  // } Driver Code Ends