class Solution {
public:
    char findTheDifference(string s, string t) {
        int charDic[26];
        memset(charDic,0,sizeof(charDic));
        
        
        for(auto a:s){
            charDic[(int)a-97]++;
        }
        
        for(auto a:t){
            charDic[(int)a-97]--;
        }

        
        for(int i=0;i<26;i++){
            if(charDic[i]<0) return (char)(i+97);
        }
        
        return 'a';
    }
};