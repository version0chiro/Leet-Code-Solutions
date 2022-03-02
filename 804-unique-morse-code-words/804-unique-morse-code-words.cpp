class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> dict = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        
        set<string> finalS;
        
        for(auto a:words){
            string temp = "";
            
            for(auto p:a){
                int id = int(p) - 97;
                temp+=dict[id];
            }
            
            finalS.insert(temp);
        }
        
        return finalS.size();
    }
};