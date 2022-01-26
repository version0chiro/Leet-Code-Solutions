class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        
        int c = 0;
        
        for(int i=0;i<words.size();i++){
            if(c>=s.size()) return true;
            for(int j=0;j<words[i].size();j++){
                if(c>=s.size() || (words[i][j]!=s[c])) return false;
                c++;
            }
        }
        
        if(c<s.size()) return false;
        
        
        return 1;
    }
};