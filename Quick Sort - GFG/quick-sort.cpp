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
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high){
            
            int id = partition(arr,low,high);
            
            quickSort(arr,low,id-1);
            
            quickSort(arr,id+1,high);
            
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int p = arr[high];
       
       int j = low-1;
       
       for(int i=low;i<high;i++){
           if(p>arr[i]){
               j++;
               swap(arr[j],arr[i]);
           }
       }
       
       swap(arr[high],arr[j+1]);
       
       return j+1;
    }
};


// { Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends