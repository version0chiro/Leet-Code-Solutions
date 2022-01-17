class Solution {
public:
    class Graph{
        int V; // number of vertices
        int E; // number edges
        
        list<int> *adj;
        vector <bool> visited;
        double ans;
        
        public:
        Graph(int v){
            this->V = v;
            adj = new list<int>[V+1];
            visited.assign(V+1,false);
            this->ans=0;
        }
        
        void addEdge(int v,int w){
            adj[v].push_back(w);
            adj[w].push_back(v);
        }
        
        void printGraph(){
            for(int i=0;i<=V;i++){
                cout<<i<<":";
                for(auto a:adj[i]){
                    cout<<a<<" ";
                }
            
            cout<<"\n";
            }
        }
        
        int getValidP(int v){
           int p=0;
            for(auto a:adj[v]){
                if(!visited[a]) p++;
            }
            
            return p;
        }
        
        double getAnswer(){
            return this->ans;
        }
        
        double DFS(int v, int t,double p,int target){
            
            // cout<<v<<" ::";
            
            this->visited[v]=true;
            
            int porrb = this->getValidP(v);
            
            // cout<<porrb<<" ";
            
            if(target==v){
                if(t==0) return (1/p);
                
                if(porrb>0) return 0;
                
                else return (1/p);
            }
            
            if(t==0) return 0;
            
            
            for(auto a:adj[v]){
                if(!visited[a]){
                    this->ans=max(this->ans,DFS(a,t-1,p*porrb,target));
                }
            }
            
            return this->ans;
        }
    
    };
    
    
    
    double frogPosition(int n, vector<vector<int>>& edges, int t, int target) {
        
        // cout<<t<<" "<<target<<" \n";
        
        if(target==1 && t==1){
            
         
          if(n==1) return 1;
            else return 0;
            
            
        }
        Graph g(n);
        
        for(auto a:edges){
            g.addEdge(min(a[0],a[1]),max(a[1],a[0]));
        }
        
    
        g.DFS(1,t,1,target);
    
        
        return g.getAnswer();
        
        // cout<<max(0.16,-nan);
        
        // return 0;  
    }
};