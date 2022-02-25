// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
     string moveRobots(string s1, string s2){
        // code here 
        int i=0,j=0, n= s1.size();
        
        while(i<n and j<n)
        {
            while(i<n and s1[i] == '#') i++;
            while(j<n and s2[j] == '#')j++;
            
            if(i<n and j<n)
            {
                if(s1[i] != s2[j]) return "No";
// neither one can move left or right
                else if((s1[i] == 'A' and j>i) or (s2[j] == 'B' and j<i)) {
                   
                    return "No";
                } 
                else i++,j++;
                
            }
            else break;
        }
        return (i ==n or j ==n )? "Yes":"No";
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin >> s1;
        cin >> s2;
        
        Solution ob;
        cout << ob.moveRobots(s1, s2) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends