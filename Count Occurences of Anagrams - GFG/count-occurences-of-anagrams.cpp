// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    unordered_map<char,int> m;
	    for(auto a:pat){
	        m[a]++;
	    }
	    
	    int count = m.size();
	    
	    int i=0,j=0;
	    
	    int ans = 0;
	    
	    while(j<pat.size()){
	        if(m.find(txt[j])!=m.end()){
	            m[txt[j]]--;
	            if(m[txt[j]]==0) count--;
	        }
	        if(count==0){
	            ans++;
	        }
	        j++;
	    }
	    
	    while(j<txt.size()){
	        if(m.find(txt[i])!=m.end()){
	            if(m[txt[i]]==0) count++;
	            m[txt[i]]++;
	            
	        }
	        i++;
	        if(m.find(txt[j])!=m.end()){
	            m[txt[j]]--;
	            if(m[txt[j]]==0) count--;
	        }
	        if(count==0){
	            ans++;
	        }
	        j++;
	        
	    }
	    
	    return ans;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends