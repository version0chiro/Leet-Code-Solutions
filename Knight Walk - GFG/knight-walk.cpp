// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
public:
int minStepToReachTarget(vector<int>&Kp, vector<int>&Tp, int N){
    vector<vector<int>> visited(N+1,vector<int>(N+1,false));
    queue<vector<int>> q;
    q.push({Kp[0],Kp[1],0});
    int count = 0;
    //Apply BFS over it's neightbours
    int dr[8][2] = {{-1,-2},{1,-2},{-2,-1},{-2,1},{-1,2},{1,2},{2,-1},{2,1}};
    while(!q.empty())
    {
        int qSize = q.size();
        for(int i=0;i<qSize;i++)
        {
            auto it = q.front();
            int curi = it[0];
            int curj = it[1];
            q.pop();
            if(curi == Tp[0] && curj == Tp[1])
            {
                return it[2];
            }
           // if(visited[curi][curj]){
           //     continue;
           // }
            visited[curi][curj] = true;
            for(int k=0;k<8;k++)
            {
                int dx = dr[k][0];
                int dy = dr[k][1];
                int nbri = dx+curi;
                int nbrj = dy+curj;
                if(nbri>0 && nbri<=N && nbrj>0 && nbrj<=N && !visited[nbri][nbrj])
                {
                    q.push({nbri,nbrj,it[2]+1});
                    visited[nbri][nbrj] = true;
                }
            }
        }
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