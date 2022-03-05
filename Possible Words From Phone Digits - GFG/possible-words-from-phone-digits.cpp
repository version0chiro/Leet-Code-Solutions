// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    
    vector<string> ans;
    
    
    
    void solve(int a[],int i,int j,int N,string temp,string keypad[]){
        
        // cout<<i<<" "<<j<<" "<<a[i]<<" "<<temp<<endl;
        
        if(i==N){
            ans.push_back(temp);
            return;
        }
        
        if(j>=keypad[a[i]].size() || i>N) return;
        
        solve(a,i,j+1,N,temp,keypad);

        
        if(j<keypad[a[i]].size()){
            temp=temp+keypad[a[i]][j];
            solve(a,i+1,0,N,temp,keypad);
        }
        
    }
    vector<string> possibleWords(int a[], int N)
    {
       
        //Your code here
        string keypad[] = { "", "", 
        					"abc", "def", 
        					"ghi", "jkl", 
        					"mno", "pqrs", 
        					"tuv", "wxyz" };
        					
        solve(a,0,0,N,"",keypad);
        
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends