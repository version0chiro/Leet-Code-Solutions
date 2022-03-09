// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    
    Node* reverse(Node *head){
        Node *prev = NULL;
        Node *temp = NULL;
        while(head){
            temp=head->next;
            head->next=prev;
            prev=head;
            head=temp;
        }
        
        return prev;
    }
    
    bool isPalindrome(Node *head)
    {
        //Your code here
        
        if(head->next==NULL) return 1;
        
        Node *fast = head;
        Node *slow = head;
        Node *prev_s = head;
        
        bool even = false;
        
        while(fast && fast->next){
            prev_s = slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        
        if(fast==NULL){
            even=true;
            prev_s->next = NULL;
            
        } 
        
        
        fast=head;
        
        slow = reverse(slow);
        
        // while(slow){
        //     cout<<slow->data<<" ";
        //     slow=slow->next;
        // }
        // cout<<endl;
        // while(fast){
        //     cout<<fast->data<<" ";
        //     fast=fast->next;
        // }
        
        
        
        
        
        while(slow && fast && slow->data==fast->data){
            // cout<<slow->data<<" "<<fast->data<<"\n";
            slow=slow->next;
            if(even && slow==fast){
                return true;
            }
            fast=fast->next;
            
            if(!even && slow==fast){
                return true;
            }
        }
        
        
        
        if(slow==NULL && fast==NULL) return true;
        
        return false;
        
        
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends