class Solution {
public:
    vector<vector<char>> letters = {{},{},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'}
                                   ,{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
    
    
    void solve(vector<string> &ans,string digits,int i,int k,string curr,int len){
        
        if(i>=len) return;
        
        cout<<i<<" "<<len<<" "<<" "<<k<<" "<<digits[i]<<" ";
        
        int j =letters[((int)digits[i] - 48)].size();
        
        cout<<j<<"\n";
        if(k>=j) return;
        auto temp=curr;
        curr=curr+letters[((int)digits[i] - 48)][k];
        cout<<" "<<curr<<" \n";
        if(i==len-1){
            ans.push_back(curr);
        }
        
        solve(ans,digits,i+1,0,curr,len);
        
        solve(ans,digits,i,k+1,temp,len);
        
    }
    
    vector<string> letterCombinations(string digits) {
        if(digits==""){
            return {};
        }
        vector<string> ans;
        int i=0;
        solve(ans,digits,i,0,"",digits.size());
        return ans;
    }
};