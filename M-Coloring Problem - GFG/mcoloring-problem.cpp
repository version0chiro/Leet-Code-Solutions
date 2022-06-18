// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to determine if graph can be coloured with at most M colours such
// that no two adjacent vertices of graph are coloured with same colour.

bool isSafe(bool graph[101][101],int m,int v,int c,int colors[]){
    for(int i=0;i<m;i++){
        if(graph[v][i] && colors[i]==c) return false;
    }
    
    return true;
    
}

bool graphColoringUtil(bool graph[101][101],int m,int n,int colors[],int v){
    if(v==n) return true;
    
    for(int i=1;i<=m;i++){
        if(isSafe(graph,n,v,i,colors)){
            colors[v]=i;
            if(graphColoringUtil(graph,m,n,colors,v+1)) return true;
            
            colors[v]=0;
        }
        
    }
    
    return false;
}

bool graphColoring(bool graph[101][101], int m, int n) {
    // your code here
    int colors[n];
    
    for(int i=0;i<n;i++) colors[i]=0;
    
    return graphColoringUtil(graph,m,n,colors,0);
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        cout << graphColoring(graph, m, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends