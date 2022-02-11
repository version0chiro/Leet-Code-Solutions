// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

    bool isSafe(vector<vector<int>> mat,int i,int j){
        
        int val = mat[i][j];
        
        for(int k=0;k<9;k++){
            if(k==i) continue;
            if(mat[k][j]==val){
                // cout<<k<<" "<<j<<" false";
                return false;
            } 
                
        }
        for(int k=0;k<9;k++){
            if(k==j) continue;
            if(mat[i][k]==val){
                // cout<<k<<" "<<i<<" false";
                return false;
            } 
                
        }
        
        
        int rN = ((i+3)/3 )*3 - 3;
        int cN = ((j+3)/3 )*3 - 3;
        
        // cout<<rN<<" "<<cN<< " \n";
        
        for(int k=rN;k<rN+3;k++){
            for(int p = cN;p<cN+3;p++){
                // cout<<p<<" "<<k<<" \n";
                if(k==i && j==p) continue;
                
                if(mat[k][p]==val){
                    // cout<<k<<" "<<p<<" \n";
                    return false;
                } 
            }
        }
        
        return true;
        
    }
    int isValid(vector<vector<int>> mat){
        // code here
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(mat[i][j]!=0 && !isSafe(mat,i,j)) return false;
                
            }
        }
        
        return true;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>> mat(9, vector<int>(9, 0));
        for(int i = 0;i < 81;i++)
            cin>>mat[i/9][i%9];
        
        Solution ob;
        cout<<ob.isValid(mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends