// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        
        int ans = 0;
        
        int start = 0;
        
        bool negative = false;
        if(str[0]=='-'){
            start++;
            negative=true;
        }
        
        for(int i=start;i<str.size();i++){
            char a = str[i];
            if(!isdigit(a)) return -1;
            int temp = a - '0';
            ans = ans*10 + temp;
        }
        
        if(negative) return -(abs(ans));
        
        return ans;
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
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends