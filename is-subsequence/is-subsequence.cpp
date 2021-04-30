class Solution {
public:
    bool isSubsequence(string s, string t) {
       queue<char> st;
       for(auto a:s){
           st.push(a);
       }
        
       for(auto a:t){
           if(st.empty()){return true;}
           if(st.front()==a){
               st.pop();
           }
       }
       
      return st.empty(); 
       
    }
};