class Solution {
public:
    bool isSubsequence(string s, string s2) {
        int sL = s.size();
        int tL = s2.size();
        
        int t[sL+1][tL+1];
        
        for(int i=0;i<sL+1;i++){
            t[i][0] = 0;
        }
        
        for(int i=0;i<tL+1;i++){
            t[0][i]=0;
        }
        
        t[0][0]=0;
        
        for(int i=1;i<sL+1;i++){
            for(int j=1;j<tL+1;j++){
                if(s[i-1]==s2[j-1]){
                    t[i][j]=t[i-1][j-1] +1;
                }else{
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        
        return t[sL][tL]==sL;
    }
};