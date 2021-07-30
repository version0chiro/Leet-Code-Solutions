class Solution {
public:
    int time = 0;
    int solve(int v,vector<int> adj[],vector<int>& informTime){
        int timeTemp=informTime[v];
        int timeT = 0;
        for(auto a:adj[v]){
            cout<<a<<" ";
            // time+=
            timeT = max(timeT,solve(a,adj,informTime));
            // timeTemp+=
        }
        
        return timeTemp+timeT;
    }
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<int> adj[n];
        for(int i=0;i<n;i++){
            if(i!=-1 && manager[i]!=-1){
                adj[manager[i]].push_back(i);
            }
        }
        cout<<headID<<" ";
        time+=informTime[headID];
        int timeTemp=0;
        for(auto i:adj[headID]){
            cout<<i<<" ";
            // time+=informTime[i];
            timeTemp = max(timeTemp,solve(i,adj,informTime));
            
        }
        return time+timeTemp;
    }
};