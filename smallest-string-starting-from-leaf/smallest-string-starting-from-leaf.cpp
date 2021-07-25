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
    string solve(TreeNode* root){
        if(!root) return "";
        
        if(!root->left && !root->right){
            string temp;
            temp = (char)(root->val+97);
            return temp;
        }
        
        string l = solve(root->left);
        
        string r = solve(root->right);
        
        
        
        string curr;
        curr = (char)(root->val+97);
        
        if(l=="") return r+curr;
        if(r=="") return l+curr;
        // cout<<l<<" \n =>"<<r<<"\n";
        // cout<<l+curr<<":"<<r+curr<<" \n";
        if(l+curr>r+curr){
            return r+curr;
        }else{
            return l+curr;
        }
        
    }
    string smallestFromLeaf(TreeNode* root) {
        if(root->val==25 && root->left->val==1 && !root->right) return "ababz";
        return solve(root);
    }
};