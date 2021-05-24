class Solution {
public:
    
    int minCoin(vector<int>& coin,int S,int dp[])
    {
        if(S==0)
            return 0;
        if(S<0)
            return INT_MAX;
        if(dp[S]!=-1)
            return dp[S];
        int mini=INT_MAX;
        for(int i=0;i<coin.size();i++)
        {
            if(coin[i]<=S)
            {
                int res=minCoin(coin,S-coin[i],dp);
                if(res!=INT_MAX and res<mini)
                    mini=res+1;
            }
        }
        
        return dp[S]=mini;
            
    }
    
    int coinChange(vector<int>& coins, int amount) 
    {
        int dp[amount+5];
        memset(dp,-1,sizeof dp);
        int res= minCoin(coins,amount,dp);
        return (res==INT_MAX)?-1:res;
    }
};