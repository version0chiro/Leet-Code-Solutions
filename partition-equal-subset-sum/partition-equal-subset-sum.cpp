class Solution {
public:
    bool ans = false;
    int dp[201][20001];
    
    bool help(int pos,int sum,vector<int> nums){
        if(sum==0)
            return true;
        if(pos>=nums.size() or sum<0){
            return false;
        }
        if(dp[pos][sum] != -1)
            return dp[pos][sum];
        
        
        int t=nums[pos];
        
        return dp[pos][sum]= help(pos+1,sum-t,nums) or help(pos+1,sum,nums);
        
    }
    bool canPartition(vector<int>& nums) {
        int sum =0;
        for(auto a:nums){
            sum+=a;
        }
        if(sum%2==1){
            return false;
        }
        memset(dp, -1, sizeof(dp));
        
        return help(0,sum/2,nums);
    }
};