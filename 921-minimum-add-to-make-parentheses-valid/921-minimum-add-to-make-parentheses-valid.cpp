class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int ans=0;
        for(auto a:s){
            if(a==')'){
                if(st.size() && st.top()=='('){
                    st.pop();
                }else{
                    ans++;
                }
            }else{
                st.push(a);
            }
        }
        
        
        return st.size()+ans;
    }
};