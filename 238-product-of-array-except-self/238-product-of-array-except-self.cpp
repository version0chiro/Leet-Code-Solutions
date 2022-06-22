class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(),0);
        
        int prefix =1;
        
        for(int i=0;i<nums.size();i++){
            res[i]=prefix;
            prefix=prefix*nums[i];
        }
        
        int postfix = 1;
        
        for(int i=nums.size()-1;i>=0;i--){
            res[i]*=postfix;
            postfix=postfix*nums[i];
        }
        
        return res;
    }
};