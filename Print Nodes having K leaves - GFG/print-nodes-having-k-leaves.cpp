// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
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
/*The Node is defined as follows:
struct Node
{
    int data ;
    struct Node * left, * right ;
};
*/


class Solution{
  public:
    /*You are required to complete below method */
    
    vector<int> ans;
    
    int solve(Node *root,int k){
        if(!root) return 0;
        
        if(!root->left && !root->right) return 1;
        
        auto nodesOnL = solve(root->left,k);
        
        auto nodesOnR = solve(root->right,k);
        
        if (nodesOnL+nodesOnR == k){
            ans.push_back(root->data);
        }
        
        return nodesOnL+nodesOnR;
    }
    
    vector<int> btWithKleaves(Node *ptr, int k)
    { 
        //your code here.
        solve(ptr,k);
        
        if(ans.size()==0) return {-1};
        
        return ans;
        
    }

};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        int k;
        cin>>k;
        getchar();
        
        string s;
        getline(cin, s);
        
        Node* root = buildTree(s);
        Solution obj;
        vector<int> nodes = obj.btWithKleaves(root,k);
        for(int i = 0;i<nodes.size();i++){
            cout<<nodes[i]<<" ";
        }
        cout<<"\n";
    }
    return 1;
}
  // } Driver Code Ends