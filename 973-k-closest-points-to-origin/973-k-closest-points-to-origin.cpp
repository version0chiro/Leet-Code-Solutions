class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // priority_queue<pair<pair<int,int>,pair<int,int>>,vector<pair<pair<int,int>,pair<int,int>>>,greater<pair<pair<int,int>,pair<int,int>>>> pq;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        
        for(int i=0;i<points.size();i++){
            int dist = (pow(points[i][0],2)+pow(points[i][1],2));
            
            pq.push({dist,{points[i][0],points[i][1]}});
            
            // cout<<dist<<" ";
        }
        
        vector<vector<int>> ans;
        
        while(k>0){
            
            auto curr = pq.top();
            
            vector<int> temp = {curr.second.first,curr.second.second};
            
            ans.push_back(temp);
            
            pq.pop();
            
            k--;
        }
        
        return ans;
        
        
    }
};