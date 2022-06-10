class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        
        unordered_map<char,int> m;
        
        // deque<char> dq;
        
        int i=0;
        int j=0;
        
        while(i<s.size()){
            
            if(m.find(s[i])==m.end() || m[s[i]]==0){
                // dq.push_back(s[i]);
                m[s[i]]++;
                
            }else{
                // cout<<" rep:"<<j<<" "<<i<<" "<<s[j]<<" : "<<s[i]<<" \n";
                while(j<s.size() && m[s[i]]>=1){
                    m[s[j]]--;
                    j++;
                }
                m[s[i]]++;
                
            }
            // cout<<" "<<i<<" "<<j<<" "<<i-j<<" "<<ans<<"\n";
            ans=max(ans,i-j+1);
            i++;
        }
        
        
     return ans;
    }
};