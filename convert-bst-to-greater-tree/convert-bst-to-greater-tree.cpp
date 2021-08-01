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
    int temp = 0;
    TreeNode* convertBST(TreeNode* root) {
        if(!root) return NULL;
        if(root->right) convertBST(root->right);
        temp=root->val=root->val+temp;
        if(root->left) convertBST(root->left);
        return root;
    }
};