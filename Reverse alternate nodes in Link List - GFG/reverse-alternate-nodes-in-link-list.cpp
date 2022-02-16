// { Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


 // } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
class Solution
{
    public:
    
    Node* reverse(struct Node *root){
        Node* curr = root;
        Node* prev = NULL;
        while(curr){
            
            auto temp = curr->next;
            
            curr->next=prev;
            
            prev=curr;
            
            curr = temp;
        }
        
        return prev;
        
    }
    
    void rearrange(struct Node *odd)
    {
        //add code here
        if(!odd || !odd->next ) return;
        
        Node *newList = new Node(-1);
        
        Node *newHead = newList;
        
        Node *curr = odd;
        
        Node *prev = NULL;
        
        while(curr && curr->next){
             
            newList->next=curr->next;
            curr->next=curr->next->next;
            prev=curr;
            curr=curr->next;
            newList=newList->next;
            
        }
        
        newHead=newHead->next;
        
        auto p = newHead;
        
        newHead = reverse(p);
        
        // while(newHead){
        //     cout<<newHead->data<<" ";
        //     newHead=newHead->next;
        // }
        
        // cout<<endl;
        prev->next = newHead;
    }
};



// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}
  // } Driver Code Ends