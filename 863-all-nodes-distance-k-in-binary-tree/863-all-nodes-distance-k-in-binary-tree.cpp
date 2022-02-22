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
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
       queue<TreeNode*> q;
        
        q.push(root);
        
        unordered_map<TreeNode*,TreeNode*> m;
        
        vector<int> ans;
        
        while(q.size()){
            int s = q.size();
            
            for(int i=0;i<s;i++){
                auto top = q.front();
                q.pop();
                
                if(top->left){
                    q.push(top->left);
                    m[top->left]=top;
                }
                
                if(top->right){
                    q.push(top->right);
                    m[top->right]=top;
                }
                
                
            }
        }
        
        unordered_map<TreeNode*,bool> vis;
        
        while(q.size()) q.pop();
        
        q.push(target);
        
        while(q.size() && k>=0){
            int s = q.size();
            k--;
            vector<int> temp;
            for(int i=0;i<s;i++){
                auto top=q.front();
                vis[top]=true;
                temp.push_back(top->val);
                q.pop();
                
                if(top->left && vis.find(top->left)==vis.end()){
                    q.push(top->left);
                }
                
                if(top->right && vis.find(top->right)==vis.end()){
                    q.push(top->right);
                }
                
                if(m.find(top)!=m.end() && vis.find(m[top])==vis.end()){
                    q.push(m[top]);
                }
            }
            ans=temp;
            
        }
        
        if(k>=0) return {};
        return ans;
    }
};