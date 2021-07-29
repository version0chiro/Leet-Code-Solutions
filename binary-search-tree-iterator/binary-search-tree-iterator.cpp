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
class BSTIterator {
public:
    vector<int> arr;
    
    
    int i =1;
    
    void  solve(TreeNode* root){
        if(!root) return;
        solve(root->left);
        arr.push_back(root->val);
        solve(root->right);
    }
    BSTIterator(TreeNode* root) {
        arr.push_back(-1);
        solve(root);
        // i++;
    }
    
    int next() {
        cout<<i<<" ";
        
        if(arr[i]==-1) {
            i++;
            return NULL;
        }
        
        else {
            
            return arr[i++];
        }
    }
    
    bool hasNext() {
        if(i<arr.size()) return true;
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */