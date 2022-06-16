

class Solution {
public:
    string longestPalindrome(string s) {
        string s1 = s;
        reverse(s1.begin(),s1.end());
        
        string ans = "";
        
        int n = s.size();
        
        int t[n+1][n+1];
        
        for(int i=0;i<n+1;i++){
            for(int j=0;j<n+1;j++){
                t[i][j]=0;
            }
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                if(s[i-1]==s1[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                    
                    if(t[i][j]>ans.size()){
                        auto temp = s.substr(i-t[i][j],t[i][j]);
                        
                        string revTemp = temp;
                        
                        reverse(revTemp.begin(),revTemp.end());
                        
                        if(revTemp==temp){
                            ans=temp;
                            
                        }
                            
                    }
                    
                }else{
                    t[i][j]=0;
                    // t[i][j].alph="";
                }
            }
        }
        
        
        // for(int i=0;i<n+1;i++){
        //     for(int j=0;j<n+1;j++){
        //         cout<<t[i][j].alph<<" ";
        //     }
        //     cout<<endl;
        // }
        
        
        return ans;
    }
};