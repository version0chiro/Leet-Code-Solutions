// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string isCircular(string path);

int main(){
    int t;
    cin >> t;
    while(t--){
        string path;
        cin >> path;
        cout << isCircular(path) << endl;
    }
return 0;
}// } Driver Code Ends


string isCircular(string instructions){
    //complete the function hereint x=0,y=0;
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
          
            
            
        
        
        
        return (new_x==0 && new_y==0)?"Circular":"Not Circular";
}