class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> m;
        
        int sum = 0;
        
        int l = 0;
        int r = 0;
        
        int ans = 0;
        
        while(r<nums.size()){
            if(m.find(nums[r])!=m.end()){
                while(nums[l]!=nums[r]){
                    m.erase(nums[l]);
                    sum-=nums[l];
                    l++;
                }
                sum-=nums[l];
                l++;
            }
            
            sum+=nums[r];
            
            ans=max(ans,sum);
            m[nums[r]]++;
            r++;
        }
        
        
        return ans;
    }
};