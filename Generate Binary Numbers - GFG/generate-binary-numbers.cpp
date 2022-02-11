// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.

string findBin(int n){
    string ans = "";
    while(n){
        ans=ans+to_string(n%2);
        n=n/2;
    }
    
    reverse(ans.begin(),ans.end());
    
    return ans;
}

vector<string> generate(int N)
{
	// Your code here
	
	vector<string> ans;
	
	ans.push_back("1");
	
	for(int i=2;i<=N;i++){
	    
	    ans.push_back(findBin(i));
	}
	
	
	return ans;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends