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
    vector<vector<int>> ans;
    void solve(TreeNode* root,vector<int> temp,int targetSum,int currSum){
        if(!root ) return;
        
        
        
        currSum+=root->val;
        temp.push_back(root->val);
                
        if((!root->left && !root->right) && currSum==targetSum){
            ans.push_back(temp);
            
            return;
        }
        
        solve(root->left,temp,targetSum,currSum);
        solve(root->right,temp,targetSum,currSum);
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        solve(root,{},targetSum,0);
        return ans;
    }
};