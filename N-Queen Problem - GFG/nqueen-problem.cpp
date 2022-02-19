// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{

public:

    bool isSafe(int i,int j,vector<vector<int>> &grid){
        
        // cout<<"for "<<i<<" "<<j<<" :";
        if(grid[i][j]==1) return false;
        
        for(int p=0;p<grid.size();p++){
            if(grid[p][j]==1) return false;
            if(grid[i][j]==1) return false;
            
        }
        
        int p=i,q=j;
        
        while(p>=0 && q>=0){
            if(grid[p][q]==1) return false;
            p--;
            q--;
        }
        
        p=i,q=j;
        
        while(q<grid.size() && p>=0){
            if(grid[p][q]==1) return false;
            p--;
            q++;
        }
        
        p=i,q=j;
        
        while(q>=0 && p<grid.size()){
            if(grid[p][q]==1) return false;
            p++;
            q--;
        }
        
        p=i,q=j;
        
        while(q<grid.size() && p<grid.size()){
            if(grid[p][q]==1) return false;
            p++;
            q++;
        }
        
        // cout<<"is safe \n";
        
        return true;
        
    }

    void solve(int n,vector<vector<int>> grid,vector<vector<int>> &ans,vector<int> temp,int i){
        if(n<0) return;
        if(n==0){
            // cout<<"here";
            ans.push_back(temp);
            return;
        }
        // cout<<n<<" "<<i<<" "<<grid.size()<<" ";
        for(int p=0;p<grid.size();p++){
            // cout<<p<<" \n";
            if(isSafe(i,p,grid)){
                // cout<<"Safe for "<<i<<" "<<p<<" \n";
                grid[i][p]=1;
                temp.push_back(p+1);
                solve(n-1,grid,ans,temp,i+1);
                temp.pop_back();
                grid[i][p]=0;
            }
            // else{
            //     cout<<"Not Safe for "<<i<<" "<<p<<" \n";
            // }
        }
        
    }

    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>> ans;
        vector<vector<int>> grid(n,vector<int>(n,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                grid[i][j]=0;
                
            }
        }
        
        solve(n,grid,ans,{},0);
        
        // for(auto a:ans){
        //     for(auto p:a){
        //         cout<<p<<" ";
        //     }
        //     cout<<endl;
        // }
        
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends