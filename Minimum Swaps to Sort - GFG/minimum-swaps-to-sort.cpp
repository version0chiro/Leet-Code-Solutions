// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&arr)
	{
	    // Code here
	    int n = arr.size();
	    
	    pair<int,int> adj[n];
	    
	    for(int i=0;i<arr.size();i++){
	        adj[i].first = arr[i];
	        adj[i].second=i;
	    }
	    
	    vector<bool> vis(n,false);
	    
	    int ans = 0;
	    
	    sort(adj,adj+n);
	    
	    for(int i=0;i<n;i++){
	        if(vis[i] || adj[i].second==i) continue;
	        
	        int cycleSize = 0;
	        int j = i;
	        
	        while(!vis[j]){
	            vis[j]=1;
	            
	            j = adj[j].second;
	            cycleSize++;
	        }
	        
	        if(cycleSize>0){
	            ans+=cycleSize-1;
	        }
	        
	    }
	    
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends