// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    
    int preIndex = 0;
    Node* solve(int in[],int pre[],int inStrt,int inEnd,unordered_map<int,int>& mp){
        
        if(inStrt>inEnd) return NULL;
        
        int curr = pre[preIndex++];
        
        Node* tNode = new Node(curr);
        
        if(inStrt==inEnd) return tNode;
        
        int inIndex = mp[curr];
        
        tNode->left = solve(in,pre,inStrt,inIndex-1,mp);
        tNode->right = solve(in,pre,inIndex+1,inEnd,mp);
        
        
        return tNode;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++){
            m[in[i]]=i;
        }
        
        return solve(in,pre,0,n-1,m);
        
        
        
        
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends