// { Driver Code Starts
#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
    return (before[K-1] == after[num - K]) && (before[num-K] == after[K-1]);
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends


//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

//Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node* head, int num, int K)
{
    // Your Code here
    int len = 0;
    
    Node* curr = head;
    
    Node* f = head;
    
    int c = K;
    
    Node* first=NULL;
    Node* firstP=NULL;
    Node* last=NULL;
    Node* lastP=NULL;
    
    while(curr){
        c--;
        if(c==1){
            firstP=curr;
        }
        if(c==0){
            first=curr;
        }
        
        curr=curr->next;
        len++;
    }
    
    if(c>0 ) return head;
    
    curr=head;
    
    c = len-K+1;
    
    while(curr){
        c--;
        if(c==1){
            lastP=curr;
        }
        if(c==0){
            last=curr;
        }
        curr=curr->next;
    }
    

    if(lastP)
        lastP->next=first;
    
    if(firstP)
        firstP->next = last;
        
    
        
    auto temp = last->next;
    last->next=first->next;
    first->next=temp;
    
    if(first==head) f=last;
    if(last==head) f= first;
    
    // cout<<"\n list:";
    
    // while(f){
    //     cout<<f->data<<" ";
    //     f=f->next;
    // }
    
    // cout<<endl;
    
    
    return f;
    
}
