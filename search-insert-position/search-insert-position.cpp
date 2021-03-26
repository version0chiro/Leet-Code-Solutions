class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size();
        // cout<<nums[middle];
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>target){
                return i;
            }
        }
        return nums.size();
    }
};