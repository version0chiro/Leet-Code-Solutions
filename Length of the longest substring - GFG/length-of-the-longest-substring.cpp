// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        int s[26]={0};
        int mx = 1;
        int i=0,j=0;
        for(;i<S.size();i++){
            if(s[S[i]-'a']==1){
                while(S[j]!=S[i]){
                    s[S[j]-'a']=0;
                    j++;
                }
                s[S[j]-'a']=0;
                j++;
            }
            s[S[i]-'a']=1;
            mx = max(mx,i-j+1);
        }
        
        return mx;
        
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}  // } Driver Code Ends