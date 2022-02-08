class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> ans;
        
        sort(intervals.begin(),intervals.end());
        
        int fstart = intervals[0][0];
        int fend = intervals[0][1];
        
        for(int i=1;i<intervals.size();i++){
            if(fend>=intervals[i][0]){
                fend=max(fend,intervals[i][1]);
            }else{
                ans.push_back({fstart,fend});
                fstart=intervals[i][0];
                fend=intervals[i][1];
            }
        }
        
                ans.push_back({fstart,fend});
        
        
        return ans;
    }
};