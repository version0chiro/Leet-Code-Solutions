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
    
    int solve(TreeNode* root,int &ans,int maxV,int minV){
        if(!root) return INT_MAX;
        
        // if(!root->left && !root->right) return root->val;
        
        minV = min(root->val,minV);
        maxV=max(root->val,maxV);
        
        ans = max(ans,abs(maxV-minV));
        
        int l  = solve(root->left,ans,maxV,minV);
        int r = solve(root->right,ans,maxV,minV);
        
        // ans = max(ans,abs(root->val-min(l,r)));
        
        return min(root->val,min(l,r));
    }
    
    int maxAncestorDiff(TreeNode* root) {
        int ans  = INT_MIN;
        solve(root,ans,INT_MIN,INT_MAX);
        return ans;
    }
};