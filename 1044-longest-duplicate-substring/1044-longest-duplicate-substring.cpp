class Solution {
    using ull = unsigned long long; 
public:
    
    string longestDupSubstring(string s) {
        
        int n = s.size();
        
        vector<ull> power(n+1,1);
        
        for(int i=1;i<=n;i++){
            power[i]=power[i-1]*27;
            
        }
        
        return solve(s,power);
        
    }
    
    string solve(string s,vector<ull>& power){
        int l=1;
        int h = s.size();
        while(l<=h){
            int mid = l+(h-l)/2;
            
            if(check(s,mid,power)!=-1){
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
        
        int start = check(s,l-1,power);
        if(start>0) return s.substr(start,l-1);
        
        return "";
    }
    
    int check(string s,int mid,vector<ull>& power){
        if(mid<=0) return -1;
        
        unordered_set<ull> st;
        ull curr_hash = 0;
        
        for(int i=0;i<mid;i++){
            curr_hash=curr_hash+power[mid-i-1]*(s[i]-'a');
        }
        
        
        st.insert(curr_hash);
        
        for(int i=mid;i<s.size();i++){
            curr_hash= curr_hash - power[mid-1]*(s[i-mid]-'a');
            curr_hash*=27;
            curr_hash = curr_hash + (s[i]-'a');
            if(st.count(curr_hash)){
                return i-mid+1;
            }
            st.insert(curr_hash);
        }
        
        
        return -1;
        
        
        
        
    }
};