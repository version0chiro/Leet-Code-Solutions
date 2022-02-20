class Solution {
public:
    string decodeString(string s) {
        stack<int> digiStack;
        stack<string> stringStack;
        string temp = "";
        string prev = "";
        int num = 0;
        
        for(int i=0;i<s.size();i++){
           if(isdigit(s[i])){
               num = num*10 + (s[i]-'0');
           }
            
            else if(isalpha(s[i])){
                temp=temp + s[i];
            }
            else if(s[i]=='['){
                stringStack.push(temp);
                digiStack.push(num);
                temp="";
                num=0;
            }else if(s[i]==']'){
                string t = temp;
                for(int i=0;i<digiStack.top()-1;i++){
                    temp+=t;
                }
                temp = stringStack.top() + temp;
                stringStack.pop();
                digiStack.pop();
            }
        }
        
        return temp;
    }
};