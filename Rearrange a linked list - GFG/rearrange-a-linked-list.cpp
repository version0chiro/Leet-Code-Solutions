// { Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};



 // } Driver Code Ends
/* Node structure

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution
{
    public:
    
    void solve(Node *head){
        
        if(!head ) return ;
        
        auto temp = head->next;
        
        if(head->next)
            head->next = head->next->next;
        
        if(temp && head->next)
            temp->next = head->next->next;
        
        solve(head->next);
    }
    
    void rearrangeEvenOdd(Node *head)
    {
       // Your Code here
       auto temp = head->next;
       
       
       
       solve(head);
       
       auto temp2 = head;
       
       while(temp2->next){
           temp2=temp2->next;
       }
       
       temp2->next=temp;
       
       
       
       
    }
};


// { Driver Code Starts.

/* Driver program to test above function*/
int main()
{
    int T,i,n,l;

    cin>>T;

    while(T--)
    {
        struct Node *head = NULL;
        struct Node *temp = head;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>l;

            if (head == NULL)
            {   
                head = temp = new Node(l); 
                
            }
            else
            {  temp->next = new Node(l);
               temp = temp->next;
            }
        }
        Solution ob;
        ob.rearrangeEvenOdd(head);
        while(head != NULL)
        {
            printf("%d ", head->data);
            head = head->next;
        }
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends