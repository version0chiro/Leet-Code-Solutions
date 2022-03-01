// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    
    bool solve(vector<vector<int>>& g,int i,int j){
        if(i<0 || j<0 || i>=g.size() || j>=g[0].size() || g[i][j]==0) return false;
        
        if(g[i][j]==2) return true;
        
        g[i][j]=0;
        
        return solve(g,i+1,j) || solve(g,i,j+1) || solve(g,i-1,j) || solve(g,i,j-1);
        
        
    }
    bool is_Possible(vector<vector<int>>& g) 
    {
        //code here
        int startI,startJ;
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                if(g[i][j]==1){
                    startI=i,startJ=j;
                    break;
                }
            }
        }
        
        return solve(g,startI,startJ);
        
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends