class Solution {
public:
    string thousandSeparator(int n) {
        
        if(n==0) return "0";        
        stack<char> st;
        
        unsigned long long tenTH = 0;
        
        int counter=3;
        
        while(n>0){
            tenTH = tenTH*10 + n%10;
            st.push(
                '0'+n%10
            );
            counter--;
            if(counter==0){
                st.push('.');
                counter =3;
            }
            n= n /10;
        }
        
        string ans = "";
        
        if(st.size() && st.top()=='.') st.pop();
        
        while(st.size()){
            ans= ans + st.top();
            st.pop();
        }
        
        
        
        return ans;
    }
};