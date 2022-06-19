// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here   
        unordered_map<char,int> m;
        
        int dist_count = 0;
        
        for(auto a:str){
            
            if(m.find(a)==m.end()){
                dist_count++;
            }
            m[a]=1;
        }
        
        int i=0;
        int ans=INT_MAX;
        int j=0;
        
        while(i<str.size()){
            
            m[str[i]]--;
            
            if(m[str[i]]==0){
                dist_count--;
            }
            
            if(dist_count==0){
                while(i<str.size() && dist_count==0){
                    
                    ans=min(ans,i-j+1);
                    m[str[j]]++;
                    
                    if(m[str[j]]>0){
                        dist_count++;
                    }
                    
                    j++;
                    
                    
                }
            }
            
            
            i++;
        }
        
        return ans;
        
        
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends