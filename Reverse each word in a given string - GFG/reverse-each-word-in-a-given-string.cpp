// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        stack<char> tempS;
        
        string ans = "";
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='.'){
                while(tempS.size()){
                    ans+=tempS.top();
                    tempS.pop();
                }
                ans+='.';
            }else{
                tempS.push(s[i]);
            }
        }
        while(tempS.size()){
            ans+=tempS.top();
            tempS.pop();
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends