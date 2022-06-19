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
    TreeNode* solve(vector<int>& preorder,int preS,int preE,vector<int>& inorder,int inS,int inE,unordered_map<int,int>& m){
        if(preS>preE || inS>inE) return NULL;
        
        TreeNode* root = new TreeNode(preorder[preS]);
        
        int index = m[preorder[preS]];
        
        int numsLeft = index-inS;
        
        root->left = solve(preorder,preS+1,preS+numsLeft,inorder,inS,index-1,m);
        root->right = solve(preorder,preS+numsLeft+1,preE,inorder,index+1,inE,m);
        
        
        return root;
        
        
        
    }
    
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        unordered_map<int,int> m;
        int n = pre.size();
        
        for(int i=0;i<n;i++){
            m[in[i]]=i;
        }
        
        return solve(pre,0,n-1,in,0,n-1,m);
    }
};