// { Driver Code Starts
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
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

void printInorder (struct Node* node)
{
	if (node == NULL)return;
	printInorder(node->left);
	printf("%d ", node->data);
	printInorder (node->right);
}

Node* constructTree(int n, int pre[], char preLN[]);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Node* root = NULL;
        int n;
        cin>>n;
        int pre[n];
        char preLN[n];
        for(int i=0; i<n; i++)cin>>pre[i];
        for(int i=0; i<n; i++)cin>>preLN[i];
        root = constructTree (n, pre, preLN);
        printInorder(root);
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends


/*Structure of the Node of the binary tree is as
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
*/
// function should return the root of the new binary tree formed
int i =0;

void solve(Node* &root,int n,int pre[],char preLN[],int &i){
    if(i>=n) return;
    
    root->data = pre[i];
    
    // cout<<pre[i]<<" ";
    
    if(preLN[i]=='N'){
        i++;
        root->left = new Node(-1);
        solve(root->left,n,pre,preLN,i);
        
        i++;
        root->right = new Node(-1);
        
        
        solve(root->right,n,pre,preLN,i);
    }else{
        return;
    }
}

struct Node *constructTree(int n, int pre[], char preLN[])
{
    
    // Code here
    Node* root = new Node(-1);
    
    int i =0;
    
    solve(root,n,pre,preLN,i);
    
    // cout<<endl;
    
    return root;
}