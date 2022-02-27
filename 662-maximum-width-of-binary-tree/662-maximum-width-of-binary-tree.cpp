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
    int widthOfBinaryTree(TreeNode* root) {
        
        queue<pair<TreeNode*,long long>> q;
        
        q.push({root,0});
        
        long long ans = 0;
        
        while(q.size()){
            long long s = q.size();
            long long offset = q.front().second;
            long long tempL=0;
            long long tempR=0;
            for(int i=0;i<s;i++){
                auto curr = q.front().first;
                long long p = q.front().second - offset;
                if(i==0) tempL=p;
                if(i==s-1) tempR=p;
                
                q.pop();
                
                if(curr->left){
                    q.push({curr->left,2*p});
                }
                
                if(curr->right){
                    q.push({curr->right,2*p+1});
                }
            }
            // cout<<tempL<<" "<<tempR<<"\n";
            
            ans = max(ans,tempR-tempL+1);
        }
        
        
        return ans;
        
    }
};