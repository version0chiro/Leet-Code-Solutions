class Solution {
public:
    bool check(vector<string> &grid,int i,int j,int n){
        for(int p=0;p<n;p++){
            if(grid[i][p]=='Q' || grid[p][j]=='Q'){
                return false;
            }
        }
        
        int x=i,y=j;
        while(x>=0 && y>=0){
            if(grid[x][y]=='Q'){
                return false;
            }
            x--;
            y--;
        }
        x=i-1,y=j+1;
        while(x>=0 && y<n){
            if(grid[x][y]=='Q'){
                return false;
            }
            x--;
            y++;
        }
        
        return true;
    }
    void solve(int m,int n,vector<string> board,vector<vector<string>> &ans,int i,int j){
        if(n==0){
            ans.push_back(board);
            return;
        }
        
        // cout<<n<<" \n";
        // cout<<i<<" "<<j<<" \n";
        
        if(j>=m || i>=m) return;
        
        if(check(board,i,j,m)){
            board[i][j]='Q';
            // cout<<" placing queen at "<<i<<" "<<j<<" with "<<n<<" remaning "<<"\n";
            solve(m,n-1,board,ans,i+1,0);
            board[i][j]='.';
        }
        
        solve(m,n,board,ans,i,j+1);
        
        
        
        
        
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
                vector<string> board(n,string(n,'.'));;

        
//         for(auto a:board){
//             cout<<" "<<a<<"\n";
//         }
        
        solve(n,n,board,ans,0,0);
        
        return ans;
        
    }
};