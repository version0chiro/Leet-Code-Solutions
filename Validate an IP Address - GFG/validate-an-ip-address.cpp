// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        
        bool checkTemp(string temp){
            if(temp[0]=='0' && temp.size()>1) return false;
            
            
            
            int num = stoi(temp);
            
            if(num>=0 && num<=255) return true;
            
            return false;
        }
    
        int isValid(string s) {
            // code here
            string temp = "";
            
            int dotC = 0;
            
            for(int i=0;i<s.size();i++){
                if(isalpha(s[i])) return 0;
                if(s[i]=='.'){
                    dotC++;
                    
                    if(temp=="") return 0;
                    if(!checkTemp(temp)){
                        return 0;
                    }
                    temp="";
                    continue;
                }
                temp+=s[i];
            }
            
            if(dotC!=3) return 0;
            
            if(temp.size()>0){
                if(!checkTemp(temp)){
                    return 0;
                }
            }else{
                return 0;
            }
            
            
            // if(temp=="") return 0;
            //         if(!checkTemp(temp)){
            //             return 0;
            // }
            
            return 1;
        }
};

// { Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}  // } Driver Code Ends