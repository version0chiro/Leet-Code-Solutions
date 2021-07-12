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
    int find_maxItem(vector<int>& nums){
        int maxE=INT_MIN,index=-1;
        for(int i=0;i<nums.size();i++){
            if(maxE<nums[i])
                maxE=nums[i],index=i;
        }
        
        return index;
    }
    TreeNode* solve(vector<int>& nums,int maxIndex){
        if(nums.size()<1) return NULL;
        
        
        TreeNode* root = new TreeNode(nums[maxIndex]);
        
        vector<int> left (nums.begin(),nums.begin()+maxIndex);
        vector<int> right (nums.begin()+maxIndex+1,nums.end());
        
        root->left=solve(left,find_maxItem(left));
        root->right=solve(right,find_maxItem(right));
        
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        return solve(nums,find_maxItem(nums));
        
    }
};