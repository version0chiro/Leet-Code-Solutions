class Solution {
public:
    int secondHighest(string s) {
        unordered_map<int,bool> m;
        priority_queue<int> pq;
        for(auto a:s){
            if(isdigit(a) && m.find(a)==m.end()){
                pq.push(a - '0');
                m[a]=true;
            }
        }
        
        if(pq.size()<2) return -1;
        pq.pop();
        return pq.top();
    }
};