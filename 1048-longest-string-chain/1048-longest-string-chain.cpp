class Solution {
public:
    static bool cmp(string a,string b){
        return a.size()<b.size();
    }
    int longestStrChain(vector<string>& words) {
        
        sort(words.begin(),words.end(),cmp);
        
        map<string,int> m;
        
        int res = 0;
        
        for(string a:words){
            int longest = 0;
            for(int i=0;i<a.size();i++){
                string sub = a.substr(0,i)+a.substr(i+1,a.size()+1);
                longest=max(longest,m[sub]+1);
            }
            
            m[a]=longest;
            res=max(longest,res);
        }
        
        return res;
        
    }
};