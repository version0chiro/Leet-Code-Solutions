class Solution {
public:
    bool isSafe(vector<string> &board,int _i,int _j){
        
        for(int i=0;i<board.size();i++){
            if(board[i][_j]=='Q') return false;
            
            if(board[_i][i]=='Q') return false;
        }
        
        // cout<<" "<<_i<<" "<<_j<<" \n";
        /*
        
        1,1
        0,2
        
        */
        
        
        for(int i=0;i<board.size();i++){
            
            if(_i+i<board.size() && _j+i<board.size() && board[_i+i][_j+i]=='Q') return false;
            
            if(i<=_i && i<=_j && board[_i-i][_j-i]=='Q') return false;
            
            if(i<=_i && _j+i<board.size() &&  board[_i-i][_j+i]=='Q') return false;
            
            if(i<=_j && i+_i<board.size() && board[_i+i][_j-i]=='Q') return false;
            
        }
        
        
        return true;
        
    }
    void solve(int m,int n,vector<string> &board,vector<vector<string>> &ans,int i,int j){
        if(n==0){
            ans.push_back(board);
            return;
        }
        
        // cout<<n<<" \n";
        // cout<<i<<" "<<j<<" \n";
        
        if(j>=m || i>=m) return;
        
        if(isSafe(board,i,j)){
            board[i][j]='Q';
            // cout<<" placing queen at "<<i<<" "<<j<<" with "<<n<<" remaning "<<"\n";
            solve(m,n-1,board,ans,i+1,0);
            board[i][j]='.';
        }
        
        solve(m,n,board,ans,i,j+1);
        
        
        
        
        
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board;
        for(int i=0;i<n;i++){
            string temp = "";
            for(int j=0;j<n;j++){
                temp.push_back('.');
            }
            
            board.push_back(temp);
        }
        
//         for(auto a:board){
//             cout<<" "<<a<<"\n";
//         }
        
        solve(n,n,board,ans,0,0);
        
        return ans;
        
    }
};