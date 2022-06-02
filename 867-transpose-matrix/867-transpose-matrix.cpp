class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<vector<int>> ans(m,vector<int>(n,0));
        
        vector<int> temp;
        
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                temp.push_back(matrix[i][j]);
            }
        }
        
        int k=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                // cout<<matrix[j][i]<<" ";
                ans[j][i]=temp[k++];
            }
        }
        
        
        return ans;
    }
};