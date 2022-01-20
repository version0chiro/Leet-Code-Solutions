class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        
        
        
        
        int min_val = INT_MAX;
        int max_val = INT_MIN;
        
        for(auto a:nums)
        {
            min_val = min(min_val,a);
            max_val = max(max_val,a);
        }
        
        
        vector<int> arr(max_val+1,0);
        
        
        for(auto a:nums){
            if(arr[a]==1){
            ans.push_back(a);
            }
            else{
                arr[a]=1;
            }
            
            
        }
        
        
        return ans;
        
    }
};