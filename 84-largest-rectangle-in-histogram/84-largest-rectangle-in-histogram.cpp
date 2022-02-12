class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> left,right;
        
        stack<int> s;
        
        for(int i=0;i<heights.size();i++){
            while(s.size() && heights[s.top()]>=heights[i])
                s.pop();
            
            if(s.size()==0) left.push_back(-1);
            else left.push_back(s.top());
            
            s.push(i);
        }
        
        while(s.size()) s.pop();
        
        for(int i=heights.size()-1;i>=0;i--){
            while(s.size() && heights[s.top()]>=heights[i]) s.pop();
            
            if(s.size()==0) right.push_back(heights.size());
            
            else right.push_back(s.top());
            
            s.push(i);
            
        }
        int ans = INT_MIN;
        
        for(int i=0;i<heights.size();i++){
            ans = max(ans,heights[i]*(right[heights.size()-i-1]-left[i]-1));
        }
        
        return ans;
    }
};