// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 // } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int temp[r+1];
         
         int start1 = l;
         int start2 = m+1;
         int end = r;
         int i = l;
         
         while(start1<=m && start2<=end){
             if(arr[start1]<arr[start2]){
                 temp[i]=arr[start1];
                 i++;
                 start1++;
             }else{
                 temp[i]=arr[start2];
                 i++;
                 start2++;
             }
         }
         
         while(start1<=m){
             temp[i]=arr[start1];
             start1++;
             i++;
         }
         
         while(start2<=r){
             temp[i]=arr[start2];
             start2++;
             i++;
         }
         
         for(int i=l;i<=r;i++){
             arr[i]=temp[i];
         }
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        
        if(l<r){
            
            
            int mid = l+(r-l)/2;
            
            // cout<<arr[l]<<" "<<arr[r]<<" "<<arr[mid]<<" \n";
            
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            
            merge(arr,l,mid,r);
        }
    }
};

// { Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends