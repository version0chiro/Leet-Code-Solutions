class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        queue<pair<int,int>> q;
        int steps = 0;
        q.push({entrance[0],entrance[1]});
        int dirX[4]= {0,1,0,-1};
        int dirY[4]={-1,0,1,0};
        
        while(q.size()){
            int s = q.size();
            for(int i=0;i<s;i++){
                auto top = q.front();
                q.pop();
                
                int curX = top.first;
                int curY = top.second;
                
                // cout<<curX<<" "<<curY<<" "<<maze.size()<<" "<<maze[0].size()<<" \n";
                
                if(
                    (curX==0 || curY==0 || curX==maze.size()-1 || curY==maze[0].size()-1) && 
                    !(
                        curX==entrance[0] && curY==entrance[1]
                    )
                ){
                    return steps;
                }
                
                for(int j=0;j<4;j++){
                    int newX = curX+dirX[j];
                    int newY = curY+dirY[j];
                    
                    
                    if(newX>=0 && newY>=0 && newX<maze.size() && newY<maze[0].size() &&  maze[newX][newY]=='.'){
                        q.push({newX,newY});
                        maze[newX][newY]='+';
                    }
                }
                
            }
            steps++;
        }
        
        return -1;
    }
};