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
    vector<int> ints;
    void inOrder(TreeNode* root){
        if(!root) return;
        
        inOrder(root->left);
        ints.push_back(root->val);
        inOrder(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        
        
        inOrder(root);
        
        int left=0,right=ints.size()-1;
        int n  = ints.size();
        
        while(left<right){
            int sum = ints[left]+ints[right];
            if(sum==k){
                return true;
            }
            else if(sum<k){
                left++;
            }else{
                right--;
            }
        }
        
        return false;
    }
};