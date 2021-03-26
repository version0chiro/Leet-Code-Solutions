class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,vector<int>> m;
        for(int i=0;i<nums.size();i++){
            
            m[nums[i]].push_back(i);
        }
        
        for(int i=0;i<m.size();i++){
            int sum = target-nums[i];
            if(m.find(sum)!=m.end()){
                for(auto p:m[sum]){
                    if(p!=i){
                        return {i,p};
                    }
                }
            }
            
        }
    return {0,0};
    }
};