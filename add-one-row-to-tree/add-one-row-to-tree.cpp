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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            
            return newRoot;
        }
        queue<TreeNode*> q;
        vector<TreeNode*> vec;
        TreeNode* left =root;
        TreeNode* right=root;
        q.push(root);
        int height = 1;
        while(q.size() && height!=depth){
            int s = q.size();
            vector<TreeNode*> tempVec;
            for(int i=0;i<s;i++){
                auto temp = q.front();
                q.pop();
                // cout<<temp->val<<" ";
                tempVec.push_back(temp);
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            height++;
            vec=tempVec;
        }
        TreeNode* newLeft = new TreeNode(val);
        TreeNode* newRight = new TreeNode(val);
        for(auto a:vec){
            TreeNode* tempLeft = NULL;
            TreeNode* tempRight = NULL;
            
            if(a->left){
                tempLeft=a->left;
            }
            if(a->right){
                tempRight = a->right;
            }
            
            a->left = new TreeNode(val);
            a->right = new TreeNode(val);
            
            if(tempLeft){
                a->left->left=tempLeft;
            }
            if(tempRight){
                a->right->right=tempRight;
            }
            
        }
        
        return root;
    }
};