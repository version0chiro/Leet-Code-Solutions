// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long int merge(long long arr[],long long l,long long mid,long long r){
        int i=l;
        int j=mid;
        int k=l;
        
        long long int inv_c=0;
        
        long long int temp[r+1];
        
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
    
    long long int mergeSort(long long arr[],long long l,long long r){
        long long int inv_c=0;
        if(l<r){
            auto mid = (l+r)/2;
            
            inv_c+=mergeSort(arr,l,mid);
            inv_c+=mergeSort(arr,mid+1,r);
            
            inv_c+=merge(arr,l,mid+1,r);
        }        
        
        return inv_c;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        
        // Your Code Here
        // long long int inv_c=0;
        
        return mergeSort(arr,0,N-1);
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