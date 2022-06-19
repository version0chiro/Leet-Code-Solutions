// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&target,int N)
	{
	    // Code here
	    
	   // int dirX[]={-2,-1,2,1,-2,-1,2,1};
	   // int dirY[]={-1,-2,1,2,1,2,-1,-2};
	    
	     // Code here
	    int dirX[] = {-2,-2,2,2,1,1,-1,-1};
	    int dirY[] = {1,-1,1,-1,2,-2,2,-2};
	    
	    queue<pair<pair<int,int>,int>> q;
	    
	    q.push({{KnightPos[0],KnightPos[1]},0});
	    
	    int steps = 0;
	    
	    vector<vector<bool>> vis(N+1,vector<bool> (N+1,false));
	    
	    
	    vis[KnightPos[0]][KnightPos[1]]=true;
	    
	    while(q.size()){
	        auto currPos = q.front().first;
	        auto currSteps = q.front().second;
	        
	        auto x = currPos.first;
	        auto y = currPos.second;
	        
	        q.pop();
	        
	        
	        
	        if(x==target[0] && y==target[1]){
	            return currSteps;
	        }
	        
	        
	        for(int i=0;i<8;i++){
	            int newX = x+dirX[i];
	            int newY = y+dirY[i];
	            
	            if(newX<=N && newY<=N && newX>0 && newY>0 && vis[newX][newY]==false){
	                q.push({{newX,newY},currSteps+1});
	                
	                vis[newX][newY]=true;
	            }
	            
	            
	        }
	        
	        steps++;
	        
	        
	    }
	    
	    return -1;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends