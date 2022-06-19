class Solution {
public:
    string minWindow(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        
        int m1[256]={0};
        int m2[256]={0};
        
        for(auto a:t){
            m2[a]++;    
        }
        
        
        int start_index=-1;
        int start=0;
        int min_len = INT_MAX;
        int count=0;
        
        for(int i=0;i<n1;i++){
            m1[s[i]]++;
            
            if(m1[s[i]]<=m2[s[i]]){
                count++;
            }
            
            if(count==n2){
                while(m1[s[start]]>m2[s[start]]){
                    m1[s[start]]--;
                
                    start++;
                }
                
                int temp_length = i-start+1;
                
                if(temp_length<min_len){
                    min_len=temp_length;
                    start_index=start;
                }
                
            }
            
        }
        
        if(start_index==-1) return "";
        
        return s.substr(start_index,min_len);
        
        
        
        
    }
};