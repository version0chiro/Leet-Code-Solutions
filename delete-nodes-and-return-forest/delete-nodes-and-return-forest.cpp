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
    vector<TreeNode*> ans;
    set<int> del_set;
    TreeNode* solve(TreeNode* root,bool is_root){
        if(!root) return NULL;
        
        bool deleted = del_set.find(root->val) != del_set.end();
        if(is_root && !deleted) ans.push_back(root);
        root->left = solve(root->left,deleted);
        root->right = solve(root->right,deleted);
        
        return deleted? NULL:root;
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        for(auto a:to_delete){
            del_set.insert(a);
        }
        
        solve(root,true);
        
        return ans;
    }
};