// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        int t = -1;
        
        unordered_map<Node*,Node*> parent;
        
        Node* startNode;
        
        set<Node*> visited;
        
        queue<Node*> q;
        
        q.push(root);
        
        while(q.size()){
            
            int s = q.size();
            
            for(int i=0;i<s;i++){
                auto top = q.front();
                if(top->data==target){
                    startNode=top;
                }
                
                q.pop();
                
                if(top->left){
                    q.push(top->left);
                    parent[top->left]=top;
                }
                
                if(top->right){
                    q.push(top->right);
                    parent[top->right]=top;
                }
            }
            
        }
        
        q.push(startNode);
        
        while(q.size()){
            int size=q.size();
            t++;
            for(int i=0;i<size;i++){
                auto top = q.front();
                // cout<<top->data<<" "<<parent[top]->data<<" \n";
                visited.insert(top);
                q.pop();
                
                if(top->left && visited.find(top->left)==visited.end()){
                    q.push(top->left);
                }
                
                if(top->right && visited.find(top->right)==visited.end()){
                    q.push(top->right);
                }
                
                if(parent.find(top)!=parent.end() && visited.find(parent[top])==visited.end()){
                    q.push(parent[top]);
                }
            }
        }
        
        // cout<<endl;
        
        return t;
    }
};

// { Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}
  // } Driver Code Ends