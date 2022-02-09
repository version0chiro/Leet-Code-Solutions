class Solution {
public:
    int numDecodings(string s) {
        
        int count[s.size()+1];
        
        count[0]=1,count[1]=1;
        
        if(s[0]=='0') return 0;
        
        for(int i=2;i<=s.size();i++){
            
            count[i]=0;
            
            if(s[i-1]>'0')
                count[i]=count[i-1];
            
            if(s[i-2]=='1' || (s[i-2]=='2' && s[i-1]<'7') )
                count[i]+=count[i-2];
            
            
            
        }
        
        return count[s.size()];
    }
};