// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    
    vector<string> ans;
    
    void solve(int n,string s,int oC,int cC){
        if(oC==n && cC == n){
            // cout<<s<<" ";
            ans.push_back(s);
            return;
        }
        
        
        if(oC<n){
            solve(n,s+'(',oC+1,cC);
        }
        
        if(oC>cC){
            solve(n,s+')',oC,cC+1);
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        
        solve(n,"",0,0);
        return ans;
        // Your code goes here 
    }
};

// { Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends