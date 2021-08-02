class union_find
{
    int m,n;
    int count;
    vector<int> parent;
    vector<int> size;
    int max_size;
public:
    union_find(vector<vector<int>>& grid)
    {
        count=0;
        max_size=0;
        m=grid.size(),n=grid[0].size();
        parent.resize(m*n+1);
        size.resize(m*n+1);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]) {parent[i*n+j]=i*n+j;size[i*n+j]=1;count++;}
            }
        }
        if(count) max_size=1;
        parent[n*m]=n*m;//dummy node
    }
    int find(int node)
    {
        while(parent[node]!=node) node=parent[node];
        return node;
    }
    void merge(int ni,int nj)
    {
        int i_id=find(ni);
        int j_id=find(nj);
        if(i_id==j_id) return;
        if(i_id<j_id) {parent[j_id]=i_id;size[i_id]+=size[j_id];size[j_id]=0;max_size=max(max_size,size[i_id]);}
        else {parent[i_id]=j_id;size[j_id]+=size[i_id];size[i_id]=0;max_size=max(max_size,size[j_id]);}
        count--;
    }
    bool connected(int ni,int nj) {return find(ni)==find(nj);}
    int get_numset() {return count;}
    int get_size(int p) {return size[p];}
    int get_maxsize() {return max_size;}
};
class Solution {
public:
    int largestIsland(vector<vector<int>>& grid) {
        //disjoint set and see which one flip will add the largest
        //using the i*n+j as the root
        //bfs search to merge 
        union_find uf(grid);
        int m=grid.size(),n=grid[0].size();
        int dir[][2]={{-1,0},{1,0},{0,-1},{0,1}};
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j])
                {
                    for(int k=0;k<4;k++)
                    {
                        int x=i+dir[k][0],y=j+dir[k][1];
                        if(x>=0 && x<m && y>=0 && y<n && grid[x][y])
                        {
                            uf.merge(i*n+j,x*n+y);
                        }
                    }
                }
            }
        }
        //now we get all the adjoint set, we will check the 0 to see which connect two or three or 4
        int maxlen=INT_MIN;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(!grid[i][j])
                {
                    unordered_set<int> us;
                    for(int k=0;k<4;k++)
                    {
                        int x=i+dir[k][0],y=j+dir[k][1];

                        if(x>=0 && x<m && y>=0 && y<n && grid[x][y])
                        {
                            int p=uf.find(x*n+y);//same region cannot be added multiple times
                            us.insert(p);
                        }
                    }
                    int cnt=0;
                    for(auto it=us.begin();it!=us.end();it++) cnt+=uf.get_size(*it);
                    maxlen=max(maxlen,cnt);
                }
            }
        }
        return maxlen==INT_MIN?uf.get_maxsize():maxlen+1;
    }
};