// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        deque<int> Qi(k);
        vector<int> ans;
        
        int i;
        
        for(i=0;i<k;i++){
            while(!Qi.empty() && arr[i]>=arr[Qi.back()])
            Qi.pop_back();
            
            
            Qi.push_back(i);
        }
        
        for(;i<n;i++){
            ans.push_back(arr[Qi.front()]);
            
            while(!Qi.empty() && Qi.front()<=i-k)
            Qi.pop_front();
            
            while(!Qi.empty() && arr[i]>=arr[Qi.back()])
            Qi.pop_back();
            
            Qi.push_back(i);
        }
        
        ans.push_back(arr[Qi.front()]);
        
        
        return ans;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends