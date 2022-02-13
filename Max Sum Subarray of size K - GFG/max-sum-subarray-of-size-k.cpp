// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int sum = 0;
        int ans = INT_MIN;
        int i=0;
        for(i=0;i<K;i++){
            sum+=Arr[i];
        }
        
        ans = sum;
        
        while(i<N){
            
            // cout<<sum<<" "<<Arr[i]<<" "<<Arr[i-K]<<" \n";
            sum = sum-Arr[i-K]+Arr[i];
            i++;
            ans=max(sum,ans);
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
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends