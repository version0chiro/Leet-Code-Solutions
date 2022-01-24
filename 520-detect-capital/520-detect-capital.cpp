class Solution {
public:
    bool detectCapitalUse(string word) {
        
        
        
        int lowerCaseLL = 97,lowerCaseUL = 122, upperCaseLL = 65, upperCaseUL = 90;
        
        
        int upperCount = 0;
        int lowerCount = 0;
        
        for(auto a:word){
            
            if( (int)a<=upperCaseUL && (int)a>=upperCaseLL ){
                upperCount++;
                if(lowerCount>0) return false;
            }
            else{
                lowerCount++;
            }
            
        }
        
        if(lowerCount==word.size() || upperCount==word.size() || (upperCount==1  && lowerCount==word.size()-1)) return true;
        
        
        
        
        
        return false;
    }
};