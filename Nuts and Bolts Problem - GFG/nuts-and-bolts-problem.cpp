// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
    
    int partition(char arr[], int low,
            int high, char pivot)
{
    int i = low;
    char temp1, temp2;
     
    for(int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            temp1 = arr[i];
            arr[i] = arr[j];
            arr[j] = temp1;
            i++;
        }
        else if(arr[j] == pivot)
        {
            temp1 = arr[j];
            arr[j] = arr[high];
            arr[high] = temp1;
            j--;
        }
    }
    temp2 = arr[i];
    arr[i] = arr[high];
    arr[high] = temp2;
 
    // Return the partition index of
    // an array based on the pivot
    // element of other array.
    return i;
}
    
    void mP(char nuts[],char bolts[],int low,int high){
        if(low<high){
	        
	        int pivot = partition(nuts,low,high,bolts[high]);
	        
	        partition(bolts,low,high,nuts[pivot]);
	        
	        mP(nuts,bolts,low,pivot-1);
	        mP(nuts,bolts,pivot+1,high);
	        
	        
	    }
    }

	void matchPairs(char nuts[], char bolts[], int n) {
	    
	    mP(nuts,bolts,0,n-1);
	    // code here
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts, bolts, n);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends