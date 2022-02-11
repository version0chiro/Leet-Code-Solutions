// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int> ans;
       
       stack<int> s;
       
       ans.push_back(1);
       s.push(0);
       
       for(int i=1;i<n;i++){
           
           while(s.size() && price[s.top()]<=price[i]){
               s.pop();
           }
           
           if(s.empty()){
               ans.push_back(i+1);
           }else{
               ans.push_back(i-s.top());
           }
           
           s.push(i);
       }
       
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
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends