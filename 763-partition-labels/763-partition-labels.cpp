class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> m;
        
        for(int i=0;i<s.size();i++){
            m[s[i]]=i;
        }
        
        
        vector<int> ans;
        
        int end=m[s[0]];
        int size = 1;
        
        for(int i=1;i<s.size();i++){
            // cout<<size<<" "<<end<<"\n";
            if(i>end){
                ans.push_back(size);
                size=0;
            }
            size++;
            end=max(end,m[s[i]]);
        }
        
        ans.push_back(size);
        
        return ans;
    }
};