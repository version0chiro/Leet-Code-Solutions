class Solution {
public:
    
    static bool cmp(vector<int> &lhs,vector<int> &rhs){
        if(lhs[1]<rhs[1] || (lhs[1]==rhs[1] && lhs[2]<rhs[2]))
            return true;
        
        return false;
    }
    
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        sort(trips.begin(),trips.end(),cmp);
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        int currentCap = 0;
        
        
        for(int i=0;i<trips.size();i++){
            
            
            while(pq.size() && trips[i][1]>=pq.top().first){
                currentCap-=pq.top().second;
                pq.pop();
            }
            
            pq.push({trips[i][2],trips[i][0]});
            
            currentCap+=trips[i][0];

            if(currentCap>capacity){
                return false;
            }
        }
        
        return true;
    }
};