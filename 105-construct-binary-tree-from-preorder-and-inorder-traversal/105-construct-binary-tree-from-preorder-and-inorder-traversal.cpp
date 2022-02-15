/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int iN = 0;
    TreeNode* solve(vector<int>& preorder,vector<int>& inorder,int st,int en,unordered_map<int,int> &m){
        if(st>en) return NULL;
        
        int curr = preorder[iN++];
        
        TreeNode* root = new TreeNode(curr);
        
        if(st==en) return root;
        
        int inIndex = m[curr];
        
        root->left = solve(preorder,inorder,st,inIndex-1,m);
        root->right = solve(preorder,inorder,inIndex+1,en,m);
        
        return root;
        
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> m;
        
        for(int i=0;i<inorder.size();i++){
            m[inorder[i]]=i;
        }
        
        return solve(preorder,inorder,0,inorder.size()-1,m);
    }
};