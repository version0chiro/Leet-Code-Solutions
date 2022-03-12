// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        int l =1;
        int h = x;
        
        long long ans = 1;
        
        while(l<=h){
            long mid = (l+h)/2;
            
            long curRoot = mid*mid;
            
            if(curRoot==x) return mid;
            else if(curRoot>x) h=mid-1;
            else{
                ans=mid;
                l=mid+1;
            }
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
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
  // } Driver Code Ends