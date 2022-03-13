// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


 // } Driver Code Ends

class Solution 
{
    public:
    //Function to find a solved Sudoku. 
    
    bool isValid(int grid[N][N], int row, int col, char c) {
        for(int i=0; i<9; i++) {
            if(grid[i][col] == c) return false;
            if(grid[row][i] == c) return false;
            if(grid[3*(row/3)+(i/3)][3*(col/3)+(i%3)] == c) return false;
        }
        return true;
    }
    
    bool isComplete(int grid[N][N]){
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(grid[i][j]==0) return false;
            }
        }
        
        return true;
    }
    
    bool solve(int grid[N][N],int z){
        if(z==0) return true;
        
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(grid[i][j]==0){
                    for(int n=1;n<=9;n++){
                        if(isValid(grid,i,j,n)){
                            grid[i][j]=n;
                            if(solve(grid,z-1)) return true;
                            grid[i][j]=0;
                        }
                        
                    }return false;
                }
            }
        }
        
        
        return false;
        
    }
    
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        int z=0;
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(grid[i][j]==0) z++;
            }
        }
        
        return solve(grid,z);
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout<<grid[i][j]<<" ";
            }
        }
        
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}  // } Driver Code Ends