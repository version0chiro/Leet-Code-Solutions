class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        auto sum = accumulate(nums.begin(),nums.end(),0);
        
        if(sum<x) return -1;
        
        if(sum==x) return nums.size();
        
        int target = sum-x;
        int currSum = 0 ;
        int start = 0;
        int maxSize = 0;
        
        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            
            while(currSum>target){
                currSum-=nums[start++];
                
                
            }
            
            if(currSum==target){
                maxSize=max(maxSize,i-start+1);
            }
        }
        
        
        return maxSize==0?-1:nums.size()-maxSize;
    }
};