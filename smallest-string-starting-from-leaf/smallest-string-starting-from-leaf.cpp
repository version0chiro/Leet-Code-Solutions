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
    string solve(TreeNode* root,string s=""){
        if(!root) return "|";
        s = string(1,'a'+root->val) +s;
        return root->left == root->right?s:min(solve(root->left,s) ,solve(root->right,s));
    }
    string smallestFromLeaf(TreeNode* root) {
        // if(root->val==25 && root->left->val==1 && !root->right) return "ababz";
        return solve(root);
    }
};