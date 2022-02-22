class Solution {
public:
    unordered_map<string,bool> dict;
    unordered_map<string,bool> memo;
    bool solve(string A,int i,string temp){
        if(A.size()<=0) return true;
        
        if(i>=A.size()) return false;
        
        string key = A+"_"+temp+"_"+to_string(i);
        
        if(memo.find(key)!=memo.end()) return memo[key];
        
        // if(i>=0) return true;
        
        // temp+=A[i];
        // cout<<A[i]<<" \n";
        temp=temp+A[i];
        
        if(dict.find(temp)!=dict.end()){
            bool f = solve(A,i+1,temp);
            
            A.erase(0,temp.size());
            
            temp="";
            
            bool s = solve(A,0,temp);
            
            memo[key] = f||s;
            
            return memo[key];
        }else{
            bool s = solve(A,i+1,temp);
            memo[key]=s;
            return s;
        }
        
    }
    bool wordBreak(string A, vector<string> &B) {
        //code here
        
        for(auto a:B){
            dict[a]=true;
        }
        
        if(solve(A,0,"")) return 1;
        
        return 0;
    }
//     bool wordBreak(string s, vector<string>& wordDict) {
        
//     }
};