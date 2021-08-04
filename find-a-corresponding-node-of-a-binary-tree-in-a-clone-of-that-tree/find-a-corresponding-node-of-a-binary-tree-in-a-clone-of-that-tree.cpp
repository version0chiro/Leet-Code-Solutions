/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* orgTarget=NULL;
    TreeNode* finalAns=NULL;
    void findFirst(TreeNode* root,TreeNode* target){
        if(!root || orgTarget) return;
        
        findFirst(root->left,target);
        // cout<<target->val<<" "<<root->val<<"\n";
        if(target==root){
            orgTarget=root;
            return;
        }
        findFirst(root->right,target);
    }
    
    void findSecond(TreeNode* root,TreeNode* org){
        if(!root) return;
        
        findSecond(root->left,org);
        if(org->val==root->val){
            finalAns=root;
            return;
        }
        findSecond(root->right,org);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        findFirst(original,target);
        findSecond(cloned,orgTarget);
        return finalAns;
    }
};