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
class FindElements {
public:
    unordered_set<int> m;
    void solve(TreeNode* root){
        if(!root) return;
        
        m.insert(root->val);
        
        if(root->left){
          root->left->val=root->val*2+1;
          solve(root->left);  
        } 
        
        if(root->right){
            root->right->val=root->val*2+2;
            solve(root->right);
        }
    }
    
//     void print(TreeNode* root){
//         if(!root) return;
        
//         print(root->left);
//         cout<<root->val;
//         print(root->right);
        
//     }
    FindElements(TreeNode* root) {
        root->val=0;
        solve(root);
        // print(root);
        // return root;
    }
    
    bool find(int target) {
        return m.find(target)!=m.end();
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */