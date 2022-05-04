class Solution {
public:
    
    int solve(vector<vector<int>> &costs,int i,int aCount,int bCount,vector<vector<int>> &dp){
        
        if(i<=0) {
            if(aCount==costs.size()/2 && bCount==costs.size()/2){
                return 0;
            }else{
                return 1000000;
            }
        }
        
        if(dp[aCount][bCount]!=-1) return dp[aCount][bCount];
        
        if(aCount<costs.size()/2){
            int f = solve(costs,i-1,aCount+1,bCount,dp)+costs[i-1][0];
            int s = solve(costs,i-1,aCount,bCount+1,dp)+costs[i-1][1];
            
            return dp[aCount][bCount]=min(f,s);
        }else{
            return dp[aCount][bCount]=solve(costs,i-1,aCount,bCount+1,dp)+costs[i-1][1];
        }
            
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        // vector<vector<int>> dp(costs.size()/2,vector<int>(costs.size()/2,-1));
        vector<vector<int>> dp( costs.size() , vector<int> (costs.size(), -1));

        return solve(costs,costs.size(),0,0,dp);
    }
};