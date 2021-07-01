/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    void inOrder(TreeNode* root,string &ans){
        if(!root) {
            ans+="N|";
            return;
        }
        ans+=to_string(root->val)+"|";
        inOrder(root->left,ans);
        inOrder(root->right,ans);
    }
    string serialize(TreeNode* root) {
        if(!root) return "";
        string serializedTree ="";
        inOrder(root,serializedTree);
        return serializedTree;
    }

    int i=0;
    // Decodes your encoded data to tree.
    TreeNode* formTree(TreeNode* root,vector<int> data){
        // cout<<i<<": ";
        if(data[i]==-1 || i>=data.size()){
            i++;
            return NULL;
        }else{
            // cout<<data[i]<<" ";
            root->val=(data[i]);
        }
        i++;
        root->left=formTree(new TreeNode(),data);
        root->right=formTree(new TreeNode(),data);
        
        return root;
        
    }
    TreeNode* deserialize(string data) {
        if(data=="") return NULL;
        stringstream ss(data);
        string item;
        vector<int> data_vec;
        while (getline (ss, item, '|')){
            if(item=="N"){
                data_vec.push_back(-1);
            }else
                data_vec.push_back(stoi(item));
        }
        return formTree(new TreeNode(),data_vec);
        // return NULL;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;