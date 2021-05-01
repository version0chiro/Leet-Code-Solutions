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
    void helper(TreeNode* root,vector<int> &inorder){
        if(root==NULL){
            return;
        }
        helper(root->left,inorder);
        inorder.push_back(root->val);
        helper(root->right,inorder);
    }
    bool isValidBST(TreeNode* root) {
       vector<int> inorder; 
        helper(root,inorder);
        for(int i=1;i<inorder.size();i++){
            if(inorder[i-1]>=inorder[i]){
                return false;
            }
        }
        return true;
    }
};