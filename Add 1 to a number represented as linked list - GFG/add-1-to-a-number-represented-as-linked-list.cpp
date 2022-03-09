// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

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
    Node* reverse(Node *head){
        
        Node* prev = NULL;
        Node* temp = head;
        
        while(head){
            temp=head->next;
            head->next=prev;
            prev=head;
            head=temp;
        }
        
        return prev;
        
        
    }
    
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        
        Node* reverseHead =  reverse(head);
        
        Node* curr = reverseHead;
        
        int carry = 0;
        
        bool first = true;
        
        Node* prev = curr;
        
        while(curr){
            
            int sum = curr->data + carry;
            if(first){
                sum++;
                first=false;
            }
            curr->data=sum%10;
            carry=sum/10;
            prev=curr;
            curr=curr->next;
        }
        
        if(carry){
            prev->next = new Node(carry);
        }
        
        return reverse(reverseHead);
        
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends