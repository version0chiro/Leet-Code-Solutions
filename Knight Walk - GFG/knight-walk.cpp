// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
public:
	int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N){
	    // Code here
	    queue<pair<pair<int,int>,int>> q;                                 
	    q.push({{KnightPos[0],KnightPos[1]},0});
	    
	    int steps = 0;
	    
	    bool t[N+1][N+1];
	    
	    memset(t,false,sizeof(t));
	    
	    
    int dr[8][2] = {{-1,-2},{1,-2},{-2,-1},{-2,1},{-1,2},{1,2},{2,-1},{2,1}};
	    
	    while(q.size()){
	        int s = q.size();
	        for(int i=0;i<s;i++){
	            auto top = q.front().first;
	            auto dis = q.front().second;
	            
	            q.pop();
	            
	            t[top.first][top.second]=true;    
	            
	            if(top.first==TargetPos[0] && top.second==TargetPos[1]){
	                return dis;
	            }
	            
	            for(int k=0;k<8;k++){
	                int dx = dr[k][0];
	                int dy = dr[k][1];
	                int nbri = dx+top.first;
	                int nbrj = dy+top.second;
	                
	                if(nbri>0 && nbri<=N && nbrj>0 && nbrj<=N && !t[nbri][nbrj]){
	                    q.push({{nbri,nbrj},dis+1});
	                    t[nbri][nbrj]=true;
	                }
	            }
	        }
	           // steps++;
	    }
	    
	    return 0;
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