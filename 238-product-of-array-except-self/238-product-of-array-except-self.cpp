class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n  = nums.size();
        vector<int> left(n);
        vector<int> right(n);
        
        left[0]=1;
        right[0]=1;
        
        for(int i=1;i<n;i++){
            left[i]=left[i-1]*nums[i-1];
            right[i]=right[i-1]*nums[n-i];
        }
        
        
        for(int i=0;i<n;i++){
            nums[i]=left[i]*right[n-i-1];
        }
        
        return nums;
            
    }
};