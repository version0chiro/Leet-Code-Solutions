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
    int ans=0;
    int solve(TreeNode* root){
        if(!root) return 0;
        // if(!root->left && !root->right) return root->val;
        
        int l = solve(root->left);
        int r = solve(root->right);
        
        return l+r+root->val;
    }
    int findTilt(TreeNode* root) {
        if(!root) return 0;
        // cout<<solve(root->left)<<" : "<<solve(root->right);       
        return abs(solve(root->left)-solve(root->right))+findTilt(root->left)+findTilt(root->right);
    }
};