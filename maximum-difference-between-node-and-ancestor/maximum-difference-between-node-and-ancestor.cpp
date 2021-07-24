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
    
    int ans = INT_MIN;
    int solve(TreeNode* root, int r_val){
        if(!root) return INT_MIN;
        
        // ans = max(ans,abs(r_val-root->val));
        
        int l = solve(root->left,r_val);
        int r = solve(root->right,r_val);   
        int curr = abs(r_val-root->val);
        
        
        return max(l,max(r,curr));
    }
    int maxAncestorDiff(TreeNode* root) {
        
        if(!root) return INT_MIN;
        
        return max(solve(root,root->val),max(maxAncestorDiff(root->right),maxAncestorDiff(root->left)));
        // return solve(root,root->val);
       
    }
};