class Solution {
public:
    
    bool isRobotBounded(string instructions) {
        int x=0,y=0;
        int dirx[4]={0,-1,0,1};
        int diry[4]={-1,0,1,0};
        
        int dir = 0;
        
        int count=0;
        
        
            int i = 0;
            int new_x=0,new_y=0;
            
            for(int i=0;i<instructions.size();i++){
                if(instructions[i]=='G'){
                    new_x+=dirx[dir];
                    new_y+=diry[dir];
                 
                }
                
                else if(instructions[i]=='L'){
                    dir=(dir-1)%4;
                    if(dir<0){
                        dir=3;
                    }
                }else{
                    // cout<<instructions[i]<<" ";
                    dir=(dir+1)%4;
                }
            }
          
            
            
        
        
        
        return new_x==0 && new_y==0 || dir!=0;
    }
};