class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i;
        for(i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                break;
            }    
        }
        
        int r = nums.size()-1;
        if(i>=0){
            while(nums[r]<=nums[i]){
                r--;
            }
            swap(nums[r],nums[i]);
        }
        
        reverse(nums.begin()+i+1,nums.end());
        
        
        
        return;
        
    }
};