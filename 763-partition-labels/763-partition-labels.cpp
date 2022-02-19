class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<int,pair<int,int>> m;
        
        for(int i=0;i<s.size();i++){
            if(m.find(s[i])==m.end()){
                m[s[i]]={i,i};
            }else{
                m[s[i]].second=i;
            }
        }
        
        vector<pair<int,int>> labels;
        
        for(auto a:m){
            labels.push_back({a.second.first,a.second.second});
            
        }
        
        sort(labels.begin(),labels.end());
        
        
        vector<pair<int,int>> ans;
        
        int start = labels[0].first,end=labels[0].second;
        
        for(int i=1;i<labels.size();i++){
            if(labels[i].first>end){
                ans.push_back({start,end});
                start=labels[i].first;
                end=labels[i].second;
            }else{
                end=max(end,labels[i].second);
            }
        }
        
        ans.push_back({start,end});
        
        vector<int> finalA;
        
        for(auto a:ans){
            finalA.push_back(a.second-a.first+1);
        }
        
        return finalA;
        
    }
};