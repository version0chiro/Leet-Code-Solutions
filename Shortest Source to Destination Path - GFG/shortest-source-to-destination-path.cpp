// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
        // priority_queue<
        // pair<int,pair<int,int>>
        // ,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        if(A[X][Y]==0 || A[0][0]==0) return -1;
        
        queue<pair<int,pair<int,int>>> pq;
        
        
        pq.push({0,{0,0}});
        
        int dirX[4]={0,-1,0,1};
        int dirY[4]={1,0,-1,0};
        
        while(pq.size()){
            int s=pq.size();
            
            for(int i=0;i<s;i++){
                auto top = pq.front();
                
                pq.pop();
                
                auto cor = top.second;
                int p = top.first;
                
                // cout<<cor.first<<" "<<cor.second<<"\n";
                
                
                if(cor.first==X && cor.second==Y){
                    return p;
                }
                
                for(int j=0;j<4;j++){
                    int newX = cor.first+dirX[j];
                    int newY = cor.second+dirY[j];
                    
                    if(newX<N && newY<M && newX>=0 && newY>=0 && A[newX][newY]==1){
                        pq.push({p+1,{newX,newY}});
                        A[newX][newY]=0;
                    }
                }
                
                
            }
        }
        
        return -1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}  // } Driver Code Ends