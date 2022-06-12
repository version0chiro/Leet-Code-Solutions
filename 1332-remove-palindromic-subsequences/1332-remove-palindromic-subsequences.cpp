class Solution {
public:
    int removePalindromeSub(string s) {
        int i = 0;
        int j = s.size()-1;
        
        int ans = 1;
        
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }else{
                return 2;
                
            }
            
        }
        return 1;   
    }
};