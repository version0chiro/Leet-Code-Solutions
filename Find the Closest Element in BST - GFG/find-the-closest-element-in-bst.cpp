// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};



 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
	
	void solve(Node *root,int K,int &ans){
	    if(!root) return;
	    
	    ans = min(ans,abs(root->data - K));
	    
	    if(root->left && root->right){
	        if( abs(root->left->data - K)<abs(root->right->data-K)){
	            solve(root->left,K,ans);
	        }else{
	            solve(root->right,K,ans);
	        }
	    }
	    
	    if(root->left) solve(root->left,K,ans);
	    
	    if(root->right) solve(root->right,K,ans);
	    
	    
	}
	
    int minDiff(Node *root, int K)
    {
        //Your code here
        int ans = INT_MAX;
        
        solve(root,K,ans);
        
        return ans;
        
    }
};


// { Driver Code Starts.

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
   Node* root = new Node(stoi(ip[0]));

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



int main() {
   
   int t;
   string tc;
   getline(cin, tc);
   t=stoi(tc);
   while(t--)
   {
        string s; 
       getline(cin, s);
       Node* root1 = buildTree(s);

       getline(cin, s);
       int k = stoi(s);
       // getline(cin, s);

        Solution ob;
       cout << ob.minDiff(root1, k);
        cout << endl;
       //cout<<"~"<<endl;
   }
   return 0;
}
  // } Driver Code Ends