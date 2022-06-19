// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// design the class in the most optimal way

class Node{
  public:
    int key;
    int value;
    Node* next;
    Node* prev;
    
    Node(int key,int data){
        this->key=key;
        this->value=data;
    }
};

class LRUCache
{
    private:

    public:
    //Constructor for initializing the cache capacity with the given value.
    
    unordered_map<int,Node*> m;
    int curr_size;
    int size;
    Node* head;
    Node* tail;
    
    
    
    LRUCache(int cap)
    {
        
        size=cap;
        curr_size=0;
        head=new Node(-1,-1);
        tail=new Node(-1,-1);
        
        head->next=tail;
        tail->prev=head;
        // code here
    }
    
    void deleteNode(Node* nodeToBeDeleted){
        nodeToBeDeleted->next->prev=nodeToBeDeleted->prev;
        nodeToBeDeleted->prev->next=nodeToBeDeleted->next;
    }
    //Function to return value corresponding to the key.
    int get(int key)
    {
        if(m.find(key)==m.end()) return -1;
        
        else{
            int ans = m[key]->value;
            
            set(key,ans);
            
            return ans;
        }
        // your code here
    }
    
    //Function for storing key-value pair.
    void set(int key, int value)
    {
        // your code here   
        if(m.find(key)!=m.end()){
           
            deleteNode(m[key]);
           
            m.erase(key);
            
            
            
            
        }else if(curr_size<size){
            curr_size++;
        }else{
            
            auto nodeToBeDeleted = head->next;
            
            deleteNode(nodeToBeDeleted);
            
            m.erase(nodeToBeDeleted->key);
            
        }
        
        Node* newNode = new Node(key,value);
        
        tail->prev->next=newNode;
        newNode->prev = tail->prev;
        
        newNode->next=tail;
        tail->prev=newNode;
        
        
        m[key]=newNode;
        
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends