class Solution {
public:
    int maximumSum(vector<int>& arr) {
        vector<vector<int>> dp(arr.size(),vector<int> (2,0));
        
        
        dp[0][0]=arr[0];
        
        int res = arr[0];
        
        for(int i=1;i<arr.size();i++){
            dp[i][0]=max(arr[i],arr[i]+dp[i-1][0]);
            dp[i][1]=max(arr[i]+dp[i-1][1],dp[i-1][0]);
            res = max(res,max(dp[i][0],dp[i][1]));
        }
        
        
        return res;
    }
};