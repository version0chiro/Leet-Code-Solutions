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
    vector<TreeNode*> ans;
    unordered_map<string,pair<int,TreeNode*>> m;
    string solve(TreeNode* root){
        if(!root) return "";
        
        string l = solve(root->left);
        string r = solve(root->right);
        
        string curr = to_string(root->val)+"_"+l+"_"+r;
        
        if(m.find(curr)!=m.end()){
            // cout<<"repeat";
            m[curr]={m[curr].first+1,m[curr].second};
            // ans.push_back(root);
        }else{
            m[curr]={1,root};
        }
        
        return curr;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        solve(root);
        for(auto a:m){
            if(a.second.first>1){
                ans.push_back(a.second.second);
            }
        }
        return ans;
    }
};