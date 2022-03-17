class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> twiceNums;
        
        for(auto a:nums){
            twiceNums.push_back(a);
        }
        for(auto a:nums){
            twiceNums.push_back(a);
        }
        
        stack<int> st;
        // 1 2 1 1 -1
        // 2
        int n = twiceNums.size();
        
        for(int i=n-1;i>=0;i--){
            // cout<<i<<" "<<twiceNums[i]<<" ";
            while(st.size() && st.top()<=twiceNums[i]){
                // cout<<"poping "<<st.top()<<" ";
                st.pop();
            }
            auto curr = twiceNums[i];
            if(st.size()==0){
                twiceNums[i]=-1;
                // cout<<" adding -1 ";
            }else{
                twiceNums[i]=st.top();
                // cout<<" adding "<<st.top()<<" ";
            }
            
            st.push(curr);
            // cout<<endl;
        }
        
        for(int i=0;i<nums.size();i++){
            nums[i]=twiceNums[i];
        }
        
        return nums;
        
    }
};