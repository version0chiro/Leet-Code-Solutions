class Solution {
public:
    class Node{
      public:
        int data;
        Node* next;
        Node* prev;
        
        Node(int _data,Node* _next){
            this->data = _data;
            this->next = _next;
        }
        
        Node(int _data){
            this->data=_data;
            this->next=NULL;
            this->prev=NULL;
        }
        
    };
    
    int findTheWinner(int n, int k) {
        
        int ans = 0;
        
        Node* head = new Node(1);
        
        Node* prev = head;
        
        for(int i=2;i<=n;i++){
            Node* nextNode = new Node(i);
            nextNode->prev = prev;
            prev->next = nextNode;
            
            prev=nextNode;
        }
        
        prev->next = head;
        
        head->prev= prev;
        
        Node* test = head;
        
        int count = n;
        
        int iter = k-1;
        
        while(count!=1){
            iter = k-1;
            while(iter){
                // cout<<" test: "<<test->data;
                test = test->next;
                iter--;
            }
            // cout<<" final:"<<test->data<<"\n";
            // cout<<" prev "<<test->prev->data << "  next "<<test->next->data<<" \n"; 
            ans = test->data;
            
            test->prev->next = test->next;
            test->next->prev = test->prev;
            test=test->next;
            count--;
            
        }
        
        
        cout<<test->data<<" :: ";
        
        return test->data;
        
    }
};