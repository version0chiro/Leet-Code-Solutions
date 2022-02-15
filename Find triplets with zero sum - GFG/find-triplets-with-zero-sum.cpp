// { Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

 // } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) continue;
                if(m.find(-(arr[i]+arr[j]))!=m.end()) {
                    // cout<<arr[i]<<" "<<arr[j]<<" \n";
                    if(-(arr[j])==arr[i]+arr[j] && m[arr[j]]>1) return true;
                    
                    else if(-(arr[i])==arr[i]+arr[j] && m[arr[i]]>1) return true;
                    
                    else if(-arr[i]!=arr[i]+arr[j] && -arr[j]!=arr[i]+arr[j]) return true;
                    
                }
            }
        }
        
        return false;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}  // } Driver Code Ends