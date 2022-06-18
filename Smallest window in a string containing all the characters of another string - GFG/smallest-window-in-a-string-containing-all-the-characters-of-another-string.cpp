// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
        int n1 = s.size();
        int n2 = p.size();
        
       int m1[256] = {0};
        int m2[256] = {0};
        
        for(auto a:p){
            m2[a]++;
        }
        
        int start = 0;
        int start_index = -1;
        int minLen=INT_MAX;
        int i=0;
        
        int c = 0;
        
        while(i<n1){
            
            m1[s[i]]++;
            
            if(m2[s[i]]>=m1[s[i]]){
                // m2[p[i]]--;
                c++;
            }
            
            if(c==n2){
                while(m1[s[start]]>m2[s[start]]){
                    if(m1[s[start]]>m2[s[start]]){
                        m1[s[start]]--;
                    }
                    start++;
                }
                
                int temp_length = i-start+1;
                if(temp_length<minLen){
                    start_index=start;
                    minLen=temp_length;
                }
            }
            
            i++;
        }
        
        
        if(start_index==-1){
            return "-1";
        }else{
            return s.substr(start_index,minLen);
        }
        
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends