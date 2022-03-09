// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    // code here
    
    int transitionPoint = -1;
    
    int l = 0,r=n-1;
    
    while(l<=r){
        int mid = (l+r)/2;
        
        if((arr[mid-1]==0 && arr[mid]==1)){
            return mid;
        }
        
        if(arr[mid-1]==0 && arr[mid]==0){
            l=mid+1;
        }
        
        else if(arr[mid]==1 && arr[mid-1]==1){
            r=mid;
        }
    }
    
    return -1;
}