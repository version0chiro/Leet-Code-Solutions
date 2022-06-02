class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int s = nums[0];
        for(int i=1;i<nums.size();i++){
            nums[i]+=s;
            s=nums[i];
        }
        
        return nums;
    }
};