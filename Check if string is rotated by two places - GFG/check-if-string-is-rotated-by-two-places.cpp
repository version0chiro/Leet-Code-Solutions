// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        // Your code here
        if(str1.size()!=str2.size()) return false;
        if(str1.size()==1){
           if(str1!=str2)
            return false;
            return true;
        }
        int n=str1.size();
        for(int i=0;i<n;i++){
            if(str2[i]!=str1[(i+2)%n] && str1[i]!=str2[(i+2)%n])
                return false;
        }
        return true;
    }

};


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}
  // } Driver Code Ends