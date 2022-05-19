class Solution {
public:
    int findMines(vector<vector<char>>& board,int x,int y){
        if(board[x][y]=='B'){
            return 0;
        }
        if(board[x][y]=='M'){
            board[x][y]='X';
            return -1;
        }
        // cout<<x<<" "<<y<<" \n";
        board[x][y]='B';
        
        int dirX[8]={0,1,0,-1,1,-1,1,-1};
        int dirY[8]={1,0,-1,0,1,-1,-1,1};
        
        int i=0;
        
        int c = 0;
        
        vector<pair<int,int>> next;
        
        for(int i=0;i<8;i++){
            int newX = x+dirX[i];
            int newY = y+dirY[i];
            
            if(newX<0 || newX>=board.size() || newY<0 || newY>=board[0].size())
                continue;
            
            if(board[newX][newY]=='M'){
                c++;
                continue;
            }
            
            else{
                next.push_back({newX,newY});
            }
            
            // else{
            //     // findMines(board,newX,newY);
            //     // cout<<"loop for "<<newX<<" "<<newY<<" \n";
            // }
            
        }
        
        if(c!=0){
            board[x][y]= (char)(c+'0');
        }else{
            for(auto a:next){
                findMines(board,a.first,a.second);
            }   
        }
        
        return c;
    }
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        findMines(board,click[0],click[1]);
            
            
            return board;
            
        
    }
};