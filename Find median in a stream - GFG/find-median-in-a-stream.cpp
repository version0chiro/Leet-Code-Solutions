// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    //Function to insert heap.
    priority_queue<int> maxH;
    priority_queue<int,vector<int>,greater<int>> minH;
    void insertHeap(int &x)
    {   
        if(maxH.size()==0 || maxH.top()>x)
        maxH.push(x);
        else minH.push(x);
        
        if(maxH.size()>minH.size()+1 || maxH.size()+1<minH.size()){
            balanceHeaps();
        }
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        if(maxH.size()>minH.size()+1){
            minH.push(maxH.top());
            maxH.pop();
        }else{
            maxH.push(minH.top());
            minH.pop();
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        // cout<<maxH.size()<<" "<<minH.size()<<" \n";
        if(maxH.size()==minH.size()) return (minH.top()+maxH.top())/2;
        else if(maxH.size()>minH.size()){
            return maxH.top();
        }else if(minH.size()>maxH.size()){
            return minH.top();
        }
        return -1;
    }
};


// { Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}  // } Driver Code Ends