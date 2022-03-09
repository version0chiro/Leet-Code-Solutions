// { Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            String[] s = br.readLine().trim().split(" ");
            int V = Integer.parseInt(s[0]);
            int E = Integer.parseInt(s[1]);
            ArrayList<ArrayList<Integer>>adj = new ArrayList<>();
            for(int i = 0; i < V; i++)
                adj.add(i, new ArrayList<Integer>());
            for(int i = 0; i < E; i++){
                String[] S = br.readLine().trim().split(" ");
                int u = Integer.parseInt(S[0]);
                int v = Integer.parseInt(S[1]);
                adj.get(u).add(v);
                adj.get(v).add(u);
            }
            Solution obj = new Solution();
            ArrayList<ArrayList<Integer>> ans = obj.criticalConnections(V, adj);
            for(int i=0;i<ans.size();i++)
                System.out.println(ans.get(i).get(0) + " " + ans.get(i).get(1));
        }
    }
}// } Driver Code Ends


//User function Template for Java

class Solution
{
    class Edge{
      int u;
      int v;
      
      Edge(int u, int v){
        this.u = u;
        this.v = v;
      }
    }
    
    class Compare implements Comparator<Edge>{
      public int compare(Edge e1, Edge e2){
        return e1.u - e2.u == 0 ? e1.v - e2.v : e1.u - e2.u; 
      }  
    }
    
    public ArrayList<ArrayList<Integer>> criticalConnections(int v, ArrayList<ArrayList<Integer>> adj)
    {
       ArrayList<ArrayList<Integer>> ans = new ArrayList<>();
       ArrayList<Edge> edges = new ArrayList<>();
    
       
       int parent[] = new int[v];
       parent[0] = -1;
       
       int time[] = {0};
       tarjansUtil(adj, 0, parent, new int[v], new int[v], new boolean[v], time, edges);
       
       Collections.sort(edges, new Compare());
       for(Edge e : edges){
         ArrayList<Integer> temp = new ArrayList<>();
         temp.add(e.u);
         temp.add(e.v);
         ans.add(temp);
       }     
       return ans;
    }
    
    void tarjansUtil(ArrayList<ArrayList<Integer>> adj, int u, int parent[], int disc[], int low [], boolean visited[], int time[], ArrayList<Edge> edges){
       visited[u] = true;
       disc[u] = time[0];
       low[u] = time[0];
       time[0]++;
       
       for(int v : adj.get(u)){
         if(parent[u]==v)continue;
         else if(visited[v])low[u] = Math.min(low[u], disc[v]);
         else{
           parent[v] = u;
           tarjansUtil(adj, v, parent, disc, low, visited, time, edges);
           low[u] = Math.min(low[u], low[v]);
           
           if(low[v] > disc[u])edges.add(new Edge((u < v ? u : v) ,(u > v ? u : v)));
         }
       }
    }
}