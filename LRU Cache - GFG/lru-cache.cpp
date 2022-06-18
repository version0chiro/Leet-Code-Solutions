// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// design the class in the most optimal way

class Node{
    public:
        int key;
        int data;
        Node* next;
        Node* prev;
        
        Node(int key,int data){
            this->key = key;
            this->data = data;
        }
};

class LRUCache
{
    private:

    public:
    
    unordered_map<int,Node*> m;
    int size;
    int curr_size;
    Node* head;
    Node* tail;
    
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        size=cap;
        head = new Node(-1,-1);
        tail = new Node(-1,-1);
        
        head->next = tail;
        tail->prev=head;
        // code here
    }
    
    //Function to return value corresponding to the key.
    int get(int key)
    {
        if(m.find(key)!=m.end()){
            int data = m[key]->data;
            
            // Node* foundNode = m[key];
            
            // foundNode->prev->next=foundNode->next;
            // foundNode->next->prev=foundNode->prev;
            
            // m.erase(key);
            
            set(key,data);
            
            return data;
        }else{
            return -1;
        }
        // your code here
    }
    
    //Function for storing key-value pair.
    void set(int key, int value)
    {
        // your code here  
        if(m.find(key)!=m.end()){
            Node* foundNode = m[key];
            
            foundNode->prev->next=foundNode->next;
            foundNode->next->prev=foundNode->prev;
            
            m.erase(key);
        } else if(curr_size<size){
            curr_size++;
            
            
        }else{
            Node* node_to_remove = head->next;
            
            node_to_remove->prev->next=node_to_remove->next;
            node_to_remove->next->prev=node_to_remove->prev;
            
            m.erase(node_to_remove->key);
        
        
        }
        Node* newNode = new Node(key,value);
        
        Node* last_tail = tail->prev;
        
        last_tail->next=newNode;
        newNode->prev = last_tail;
        
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