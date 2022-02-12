// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


 // } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
    vector<int> nextsmaller(int arr[],int n){
       
       stack<int> s;
       s.push(-1);
       vector<int>ans(n);
       
       for(int i=n-1;i>=0;i--){
       
       int curr=arr[i];
       
       while(s.top()!=-1 && arr[s.top() ]>=curr){
           
           s.pop();
       }
       ans[i]=s.top();
       s.push(i);
       }
       return ans;
   }
   
   vector<int> prevsmaller(int arr[],int n)
   {
       stack<int> s;
       s.push(-1);
       
       vector<int> ans(n);
       
       for(int i=0;i<n;i++){
           
           int curr=arr[i];
           while(s.top()!=-1 && arr[s.top()]>=curr){
               
               s.pop();
           }
           ans[i]=s.top();
           s.push(i);
       }
       return ans;
   }
   
   int largestRectangleArea(int *heights,int n)
   {
       
       vector<int> next(n);
       next=nextsmaller(heights,n);
       
       vector<int> prev(n);
       prev=prevsmaller(heights,n);
       int area=INT_MIN;
       for(int i=0;i<n;i++){
           
           int l=heights[i];
           
           if(next[i]==-1)
           next[i]=n;
           
           int b=next[i]-prev[i]-1;
           int newarea=l*b;
           area=max(area,newarea);
       }
       return area;
   }
   
   int maxArea(int M[MAX][MAX], int n, int m) {
      
      int area=largestRectangleArea(M[0],m);
      
      for(int i=1;i<n;i++)
      {
          
          for(int j=0;j<m;j++){
              
              if(M[i][j]!=0)
                  M[i][j]=M[i][j]+M[i-1][j];
              else
                  M[i][j]=0;
          }
           int newarea=largestRectangleArea(M[i],m);
             area=max(area,newarea);
      }
      return area;
   }
};


// { Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}
  // } Driver Code Ends