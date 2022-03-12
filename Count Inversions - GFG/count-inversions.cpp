// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long int merge(long long arr[],long long temp[],int l,int mid,int r){
        
        int i,j,k;
        long long int  inc_count=0;
        i=l;
        j=mid;
        k=l;
        
        while(i<mid && j<=r ){
            if(arr[i]<=arr[j]){
                temp[k++]=arr[i++];
            }else{
                temp[k++]=arr[j++];
                
                
                inc_count+=mid-i;
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
        
        return inc_count;
        
    }
    
    long long int mergeSort(long long arr[],long long temp[],int l,int r){
        long long int inc_count =0;
        
        if(l<r){
            int mid = (l+r)/2;
            
            inc_count+=mergeSort(arr,temp,l,mid);
            
            inc_count+=mergeSort(arr,temp,mid+1,r);
            
            
            inc_count+=merge(arr,temp,l,mid+1,r);
        }
        
        return inc_count;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long temp[N];
        
        return mergeSort(arr,temp,0,N-1);
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