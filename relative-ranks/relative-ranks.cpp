class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<score.size();i++){
            pq.push({score[i],i});
        }
        
        vector<string> ans(score.size());
        if(pq.size()){
            ans[pq.top().second]="Gold Medal";
            pq.pop();
        }
        if(pq.size()){
            ans[pq.top().second]="Silver Medal";
            pq.pop();
        }
        if(pq.size()){
            ans[pq.top().second]="Bronze Medal";
            pq.pop();
        }
        int c = 4;
        while(pq.size()){
            ans[pq.top().second]=(to_string(c));
            c++;
            pq.pop();
        }
        
        return ans;
    }
};