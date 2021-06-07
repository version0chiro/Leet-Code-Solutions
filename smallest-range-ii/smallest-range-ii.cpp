class Solution {
public:
    int smallestRangeII(vector<int>& arr, int k) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        int left=arr[0]+k,right=arr[n-1]-k;
        
        int ans = arr[n-1] - arr[0];
        
        for(int i=0;i<arr.size()-1;i++){
            int maxi=max(right,arr[i]+k),mini=min(left,arr[i+1]-k);
            
            ans=min(ans,maxi-mini);
        }
        
        return ans;
    }
};