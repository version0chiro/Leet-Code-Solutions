class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i =0;
        
        while(nums[i]!=-1){
            
            int temp=nums[i];
            nums[i]=-1;
            i=temp;
        }
        
        
        return i;
    }
};