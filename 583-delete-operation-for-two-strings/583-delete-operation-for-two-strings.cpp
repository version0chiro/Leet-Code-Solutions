class Solution {
public:
    
    
    int minDistance(string word1, string word2) {
        
        int n = word1.size();
        int m = word2.size();
        
        int t[n+1][m+1];
        
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                t[i][j]=0;
            }
        }
        
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(word1[i-1]==word2[j-1]){
                    t[i][j]=t[i-1][j-1]+1;
                }else{
                    t[i][j]=max(t[i][j-1],t[i-1][j]);
                }
            }
        }
        
        
        return m+n-2*t[n][m];
    }
};