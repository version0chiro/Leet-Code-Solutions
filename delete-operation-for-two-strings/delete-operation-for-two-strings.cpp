class Solution {
public:
    int minDistance(string str1, string str2) {
        int n = str1.size();
	    int m = str2.size();
	    
	    int t[n+1][m+1];
	    
	    memset(t,0,sizeof(t));
	    
	    for(int i=1;i<n+1;i++){
	        for(int j=1;j<m+1;j++){
	            if(str1[i-1]==str2[j-1]){
	                t[i][j]=1+t[i-1][j-1];
	            }else{
	                t[i][j]=max(t[i-1][j],t[i][j-1]);
	            }
	        }
	    }
	    
	    return (n-t[n][m])+(m-t[n][m]);
    }
};