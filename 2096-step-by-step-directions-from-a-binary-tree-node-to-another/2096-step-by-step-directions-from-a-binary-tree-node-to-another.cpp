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
    TreeNode* LCA(TreeNode* root,int startValue,int destValue){
        if(!root) return NULL;
        
        if(root->val==startValue || root->val==destValue) return root;
        
        TreeNode* l = LCA(root->left,startValue,destValue);
        
        TreeNode* r = LCA(root->right,startValue,destValue);
        
        if(l && r) return root;
        
        if(l) return l;
        
        return r;
    }
    
    bool getDirections(TreeNode* root,int target,string& dir){
        if(!root) return false;
        
        if(root->val==target) return true;
        
        bool l = getDirections(root->left,target,dir);
        
        bool r = getDirections(root->right,target,dir);
        
        if(l){
            dir.push_back('L');
        }
        
        else if(r){
            dir.push_back('R');
        }
        
        return l||r;
         
    }
    
    bool getParentDir(TreeNode* root,int target,string &dir){
        if(!root) return false;
        
        if(root->val==target) return true;
        
         
        bool l = getParentDir(root->left,target,dir);
        
        bool r = getParentDir(root->right,target,dir);
        
        if(l||r) dir.push_back('U');
        
        return l||r;
        
        
    }
    
    string getDirections(TreeNode* root, int startValue, int destValue) {
        TreeNode* lca = LCA(root,startValue,destValue);
        
        string dir;
        
        getDirections(lca,destValue,dir);
        getParentDir(lca,startValue,dir);
        
        reverse(dir.begin(),dir.end());
        
        return dir;
        
    }
};