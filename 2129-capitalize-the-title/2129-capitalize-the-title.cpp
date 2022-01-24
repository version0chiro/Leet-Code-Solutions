class Solution {
public:
    string capitalizeTitle(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower); //lowercase
        
        string ans = "";
        string temp = "";
        
        for(auto a:s){
            if(a==' '){
                if(temp.size()>2){
                    temp[0] = toupper(temp[0]);
                    
                }
                ans+=temp+" ";
                temp="";
            }
            else{
                temp+=a;
            }
        }
        
                if(temp.size()>2){
                    temp[0] = toupper(temp[0]);
                    
                }
                ans+=temp;
        
        
        return ans;
    }
};