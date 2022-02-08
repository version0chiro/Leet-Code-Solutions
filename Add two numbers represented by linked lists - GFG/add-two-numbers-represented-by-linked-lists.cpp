// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    
    int findLength(struct Node* head){
        int length = 0;
        while(head){
            length++;
            head=head->next;
        }
        
        return length;
    }
    
    struct Node* addExtraZero(struct Node* head, int diff){
        while(diff){
             Node* temp = new Node(0);
             temp->next=head;
             head=temp;
             diff--;
        }
        
        return head;
    }
    
    int solve(struct Node* first,struct Node* second){
        if(!first || !second) return 0;
        
        int carry = solve(first->next,second->next);
        
        int sum  = first->data + second->data + carry;
        
        first->data = sum%10;
        
        return sum/10;
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        
        int length1 = findLength(first);
        int length2 = findLength(second);
        
        if(length1<length2){
            auto firstN = addExtraZero(first,length2-length1);
            int carry = solve(firstN,second);
            if(carry){
                struct Node* temp = new Node(carry);
                temp->next = firstN;
                return temp;
            }
            return firstN;
            
        }else if(length1>length2){
            auto secondN = addExtraZero(second,length1-length2);
            int carry = solve(first,secondN);
            if(carry){
                struct Node* temp = new Node(carry);
                temp->next = first;
                return temp;
            }
            return first;
        }else{
            int carry = solve(first,second);
            if(carry){
                struct Node* temp = new Node(carry);
                temp->next = first;
                return temp;
            }
            return first;
        }
        
        return NULL;
        
        
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends