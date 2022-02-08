// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int A[], int n)
    {
       // Your code here
      vector<int> ans(n,1);
    //   for(int i=0;i<n;i++){
    //       int t = 1;
    //       for(int j=i-1;j>=0;j--){
    //           if(price[j]<=price[i]) t++;
    //           else break;
    //       }
    //       ans.push_back(t);
    //   }
       
       
    //   return ans;
        
        ans[0] = 1;
 
    // Calculate span values for rest of the elements
    for (int i = 1; i < n; i++) {
        int counter = 1;
        while ((i - counter) >= 0 && A[i] >= A[i - counter]) {
            counter += ans[i - counter];
        }
        ans[i] = counter;
    }
        
        return ans;
    
    }
};

// 100


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