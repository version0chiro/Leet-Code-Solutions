class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int r =0;
        unordered_map<int,int> m;
        for(auto i:nums){
            if(m[i]) continue;
            r=max(r,m[i]=m[i+m[i+1]]=m[i-m[i-1]]=m[i-1]+m[i+1]+1 );
        }
        return r;
    }
};