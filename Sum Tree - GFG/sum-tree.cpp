// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}
// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


 // } Driver Code Ends
/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution
{
    public:
    bool ans = true;
    
    bool isLeaf(Node* root){
        // if(!root) return true;
        
        if(!root->left && !root->right) return true;
        
        return false;
    }
    
    int solve(Node* root){
        
        if(!ans) return 0;
        
        
        if(!root) return 0;
        
        if(!root->left && !root->right) return root->data;
        
        int l = solve(root->left);
        int r = solve(root->right);
        
        // if(root->left && root->right){
        //     if(!isLeaf(root->left)){
        //         l=2*l;
        //     }
            
        //     if(!isLeaf(root->right)){
        //         r=2*r;
        //     }
        // }
        
        // cout<<root->data<<" "<<l<<" "<<r<<"\n";
        
        if(root->data!=l+r) {
            ans = false;
            return -1;
        }
        
        return root->data+l+r;
    }
    bool isSumTree(Node* root)
    {
        solve(root);
        
        return ans;
         // Your code here
    }
};

// { Driver Code Starts.

int main()
{

    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string s;
		getline(cin,s);
        Node* root = buildTree(s);
        Solution ob;
        cout <<ob.isSumTree(root) << endl;
    }
    return 1;
}  // } Driver Code Ends