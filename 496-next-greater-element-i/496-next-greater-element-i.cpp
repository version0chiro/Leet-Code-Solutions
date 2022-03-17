class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        
        int n2 = nums2.size();
        
        unordered_map<int,int> m;
        
        for(int i=0;i<nums1.size();i++){
            m[nums1[i]]=i;
        }
        
        vector<int> ans(n2,0);
        
        for(int i=n2-1;i>=0;i--){
            while(st.size() && st.top()<=nums2[i]){
                st.pop();
            }
            
            if(st.size()==0){
                if(m.find(nums2[i])!=m.end())
                    nums1[m[nums2[i]]]=-1;
                ans[i]=-1;
            }else{
                if(m.find(nums2[i])!=m.end())
                    nums1[m[nums2[i]]]=st.top();
                ans[i]=st.top();
            }
            
            st.push(nums2[i]);
        }
        
        
        return nums1;
    }
};