class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        
        for(int i=0;i<nums.size();i++){
            auto a=nums[i];
            m[a]=i;
        }
        
        for(int i=0;i<nums.size();i++){
            auto a=nums[i];
            if(m.find(target-a)!=m.end() && i!=m[target-a]){
                return{m[target-a],i};
            }
            
        }
        
        
        return {-1,-1};
    }
    
    
};