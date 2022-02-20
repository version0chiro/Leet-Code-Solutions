// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

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
            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

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
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
//User function template for C++
/*
Structure of the node of the tree is as follows 
struct Node {
    struct Node* left, *right;
    int data;
};
*/

class Solution{
  public:
    // function should return the number of turns required to go from first node to second node 
    
    Node* getLCA(Node* root,int first,int second){
        if(!root) return NULL;
        
        if(root->data==first || root->data==second) return root;
        
        Node* left = getLCA(root->left,first,second);
        
        Node* right = getLCA(root->right,first,second);
        
        if(left && right) return root;
        
        return left?left:right;
    }
    
    int solve(struct Node* root,int first,int second,bool lastLeft,bool lastRight){
        if(!root) return -10000;
        
        if(root->data==first || root->data==second) return 0;
        
        
        int left = solve(root->left,first,second,true,false);
        
        int right = solve(root->right,first,second,false,true);
        
        if(!lastLeft){
            left=left+1;
        }
        
        if(!lastRight){
            right=right+1;
        }
        
        if(right>=0 && left>=0) return left+right;
        
        return left>=0?left:right;
        
    }
    
    
    
    int NumberOFTurns(struct Node* root, int first, int second)
    {
      // Your code goes here
      
      Node* lca = getLCA(root,first,second);
      
      if(first==second) return -1;
      
      if(lca->data==first || lca->data==second){
          int k = (lca->data!=first?first:second);
          int a = solve(lca->left,k,k,true,false);
          if(a>=0)
          return (a==0?-1:a);
          else{
              int b = solve(lca->right,k,k,false,true);
              return b==0?-1:b;
          }
      }else{
          return solve(lca,first,second,true,true)+1;
      }
      
      
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    struct Node *child;
    scanf("%d ", &t);
    while (t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        int turn, first, second;
        cin>>first>>second;
        Solution ob;
        if ((turn = ob.NumberOFTurns(root, first, second) ))
            cout<<turn<<endl;
        else 
            cout<<"-1\n";
        cin.ignore();
    }
    return 0;
}
  // } Driver Code Ends