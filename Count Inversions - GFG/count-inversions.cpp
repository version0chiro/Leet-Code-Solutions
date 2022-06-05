// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long int merge(long long arr[],long long int l,long long int mid,long long int r){
        long long int i,j,k;
        
        i=l;
        j=mid;
        k=l;
        
        long long int inv_c = 0;
        
        long long temp[r+1];
        
        while(i<mid && j<=r){
            if(arr[i]<=arr[j]){
                temp[k++]=arr[i++];
                
            }else{
                temp[k++]=arr[j++];
                inv_c+=mid-i;
            }
        }
        
        while(i<mid){
            temp[k++]=arr[i++];
        }
        
        while(j<=r){
            temp[k++]=arr[j++];
        }
        
        for(int i=l;i<=r;i++){
            arr[i]=temp[i];
        }
        
        return inv_c;
    }
    
    long long int mergeS(long long arr[],long long int l,long long int r){
        
        long long inv_c = 0;
        
        if(l<r){
            
            long long int mid = (l+r)/2;
            
            inv_c+=mergeS(arr,l,mid);
            inv_c+=mergeS(arr,mid+1,r);
            
            inv_c+=merge(arr,l,mid+1,r);
            
            
        }
        
        return inv_c;
        
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        
        return mergeS(arr,0,N-1);
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends