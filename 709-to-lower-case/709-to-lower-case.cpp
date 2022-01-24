class Solution {
public:
    string toLowerCase(string s) {
        
        cout<<(int)'a'<<" "<<(int)'A'<<" "<<(int)'Z';
        
        
        for(int i=0;i<s.size();i++){
            if((int)s[i]>=65 && ((int)s[i]<=90)){
                s[i]=s[i]+32;
            }
        }
        
        
        
        return s;
    }
};