class Solution {
public:
    string reorganizeString(string s) {
        string ans = "";
        
        int n = s.size();
        
        unordered_map<char,int> m;
        
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        
        priority_queue<pair<int,char>> pq;
        
        for(auto a:m){
            pq.push({a.second,a.first});
        }
        
        pair<int,char> last;
        
        bool first = false;
        
        while(pq.size() && ans.size()<n){
        
            ans+=pq.top().second;
            
            auto temp = pq.top();
            
            pq.pop();
            
            if(first){
                // auto tempLast = {last.first-1,last.second};
                pair<int,char> tempLast = make_pair(last.first-1,last.second);
                // pq.push(last);
                if(tempLast.first>0)
                    pq.push(tempLast);
            }
                
            
            last = temp;
            
            first = true;
            
        }
        
        if(ans.size()!=n) return "";
        
        return ans;
        
        
    }
};