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
    int findGrandParents(TreeNode* root){
        int count = 3;
        int sum = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size() && count){
            int s = q.size();
            sum=0;
            for(int i=0;i<s;i++){
                auto temp = q.front();
                q.pop();
                sum+=temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            count--;
        }
        
        if(count==0) return sum;
        else return 0;
    }
    int finalAns = 0;
    void preOrder(TreeNode* root){
        if(!root) return;
        
        if(root->val%2==0){
            finalAns+=findGrandParents(root);
        }
        preOrder(root->left);
        preOrder(root->right);
    }
    int sumEvenGrandparent(TreeNode* root) {
        preOrder(root);
        return finalAns;
    }
};