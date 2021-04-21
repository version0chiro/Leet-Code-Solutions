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
    int helper(TreeNode* root,int& height){
        int lDia=0,rDia=0;
        int lHeight=0,rHeight=0;
        
        if(root==NULL){
            height = 0;
            return 0;
        }
        
        lDia = helper(root->left,lHeight);
        rDia = helper(root->right,rHeight);
        
        height = max(lHeight,rHeight)+1;
        
        return max(lHeight+rHeight,max(lDia,rDia));
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int height = 0;
        return helper(root,height);
    }
};