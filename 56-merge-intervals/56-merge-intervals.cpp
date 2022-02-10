class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int endT = intervals[0][1];
        int startT = intervals[0][0];
        vector<vector<int>> ans;
        
        for(auto a:intervals){
            if(a[0]>endT){
                ans.push_back({startT,endT});
                startT=a[0];
                endT=a[1];
            }else{
                endT=max(endT,a[1]);
            }
            
        }
        
        ans.push_back({startT,endT});
        
        
        return ans;
    }
};