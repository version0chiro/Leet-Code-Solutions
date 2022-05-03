// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int c =1;
        int lastInt = a[0];
        
        for(int i=1;i<size;i++){
            if(lastInt==a[i])c++;
            
            else{
                c--;
                
                if(c==0){
                    lastInt=a[i];
                    c=1;
                }
            }
        }
        
        
        c=0;
        
        for(int i=0;i<size;i++){
            if(lastInt==a[i]) c++;
        }
        
        if(c>size/2) return lastInt;
        
        return -1;
        
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends