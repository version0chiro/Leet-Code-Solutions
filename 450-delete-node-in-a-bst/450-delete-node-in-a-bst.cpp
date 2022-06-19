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
    
    TreeNode* getNext(TreeNode* root){
        auto curr = root->right;
        
        while(curr && curr->left){
            curr=curr->left;
        }
        
        return curr;
    }
    
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;
        
        if(root->val==key){
            if(root->left==NULL){
                auto temp = root->right;
                delete root;
                return temp;
            }else if(root->right==NULL){
                auto temp = root->left;
                delete root;
                return temp;
            }else{
                auto suc = getNext(root);
                root->val=suc->val;
                root->right = deleteNode(root->right,suc->val);
                return root;
            }
        }
        
        else if(root->val<key){
            root->right=deleteNode(root->right,key);
            
        }else{
            root->left=deleteNode(root->left,key);
        }
        
        return root;
    }
};