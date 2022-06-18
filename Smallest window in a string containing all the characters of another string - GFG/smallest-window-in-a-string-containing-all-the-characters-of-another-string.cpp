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
        int n1=s.size();
        int n2=p.size();
        
        int m1[256]={0};
        int m2[256]={0};
        
        for(auto a:p){
            m2[a]++;
        }
        
        int count =0;
        int start =0 ;
        int start_index=-1;
        int minLen=INT_MAX;
        
        for(int i=0;i<n1;i++){
            m1[s[i]]++;
            
            if(m1[s[i]]<=m2[s[i]]){
                count++;
            }
            
            if(count==n2){
                while(m1[s[start]]>m2[s[start]]){
                    if(m1[s[start]]>m2[s[start]]){
                        m1[s[start]]--;
                    }
                    start++;
                }
                
                int tempLen = i-start+1;
                
                if(tempLen<minLen){
                    minLen=tempLen;
                    start_index=start;
                }
            }
        }
        
        if(start_index==-1) return "-1";
        
        return s.substr(start_index,minLen);
        
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