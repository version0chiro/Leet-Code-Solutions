// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string A, string B)
	{
	    // your code here
	    string ans="";
	    
	    int i=A.size()-1;
	    int j = B.size()-1;
	    
	    int carry= 0;
	    
	    while(i>=0 && j>=0){
	        int dig1 = A[i]-'0';
	        int dig2 = B[j]-'0';
	        
	        int tSum=dig1+dig2+carry;
	        
	        
	        int add = tSum%2;
	        
	         carry = tSum/2;
	        
	       // cout<<tSum<<" "<<add<<" "<<carry<<" \n";
	        
	        ans.push_back((char)(add+'0'));
	        
	        i--;
	        j--;
	    }
	    
	    while(i>=0){
	        int dig1 = A[i]-'0';
	        
	        
	        int tSum=dig1+carry;
	        
	        int add = tSum%2;
	        
	         carry = tSum/2;
	        
	       // cout<<add<<" "<<carry<<" \n";
	        
	        ans.push_back((char)(add+'0'));
	        
	        i--;
	       // j--;
	    }
	    
	    while(j>=0){
	        
	        int dig2 = B[j]-'0';
	        
	        int tSum=dig2+carry;
	        
	        int add = tSum%2;
	        
	         carry = tSum/2;
	        
	       // cout<<add<<" "<<carry<<" \n";
	        
	        ans.push_back((char)(add+'0'));
	        
	        j--;
	    }
	    
	    
	   // cout<<carry<<" ";
	    
	    if(carry==1){
	        ans.push_back((char)(carry+'0'));
	    }
	    
	    int start=0;
	    
	    
	    
	    
	    
	    
	    reverse(ans.begin(),ans.end());
	    
	    for(;start<ans.size()-1;start++){
	        if(ans[start]!='0') break;
	    }
	    
	    ans = ans.substr(start,ans.size()-start);
	    
	    return ans;
	    
	    
	}
};

// { Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends