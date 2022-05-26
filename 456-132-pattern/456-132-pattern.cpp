class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<pair<int,int>> st;
        int minN = nums[0];
        
        for(auto a:nums){
            while (st.size() && st.top().first<=a) st.pop();
            
            
            if(st.size() && st.top().second<a){
                return true;
            }
            
            st.push({a,minN});
            minN=min(minN,a);
            
        }
        
        return false;
        
    }
};