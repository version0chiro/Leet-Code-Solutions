class Solution {
public:
    
    bool isSafe(vector<vector<int>> &board,int x,int y){
        int n = board.size();
        
        for(int i=0;i<n;i++){
            if(board[x][i]) return false;
            if(board[i][y]) return false;
            
            
        }
        
        for(int i=0;i<n;i++){
            
            if(x+i<board.size() && y+i<board.size() && board[x+i][y+i]) return false;
            
            if(x-i>=0 && y-i>=0 && board[x-i][y-i]) return false;
            
            if(x+i<board.size() && y-i>=0 && board[x+i][y-i]) return false;
            
            if(x-i>=0 && y+i<board.size() && board[x-i][y+i]) return false;
        }
        
        
        return true;
        
    }
    
    void solve(vector<vector<int>> &board,int &ans,int n,int q,int i,int j){
        if(q==0){
            ans++;
            return;
        }
        
        if(i==n || j==n) return;
        
        if(isSafe(board,i,j)){
            board[i][j]=1;
            solve(board,ans,n,q-1,i+1,0);
            board[i][j]=0;
        }
        
        solve(board,ans,n,q,i,j+1);
        
    }
    
    int totalNQueens(int n) {
        int ans = 0;
        vector<vector<int>> board(n,vector<int>(n,0));
        
        solve(board,ans,n,n,0,0);
        
        return ans;
    }
};