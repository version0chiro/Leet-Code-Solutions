class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1){
            return true;
        }
        int maxDistance = 0;
        for(int i=0 ; i<nums.size() && i<=maxDistance ;i++){
            maxDistance = max(maxDistance,nums[i]+i);
            
        }
        
        if(nums.size()-1<=maxDistance){
            return true;
        }
        return false;
    }
};