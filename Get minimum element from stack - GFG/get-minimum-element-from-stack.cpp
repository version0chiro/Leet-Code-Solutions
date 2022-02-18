// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           //Write your code here
           if(s.size()==0) return -1;
           
           return minEle;
       }
       
       /*returns poped element from stack*/
       int pop()
    {
        if (s.empty())
        {
            // cout << "Stack is empty\n";
            return -1;
        }
 
        // cout << "Top Most Element Removed: ";
        int t = s.top();
        s.pop();
 
        // Minimum will change as the minimum element
        // of the stack is being removed.
        if (t < minEle)
        {
            // cout << minEle << "\n";
            minEle = 2*minEle - t;
            return (t+minEle)/2;
        }
 
        else
            return t;
            // cout << t << "\n";
    }
       
       /*push element x into the stack*/
       void push(int x)
    {
        // Insert new number into the stack
        if (s.empty())
        {
            minEle = x;
            s.push(x);
            
            return;
        }
 
        // If new number is less than minEle
        else if (x < minEle)
        {
            s.push(2*x - minEle);
            minEle = x;
        }
 
        else
           s.push(x);
 
    }
};

// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}
  // } Driver Code Ends