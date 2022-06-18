// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// design the class in the most optimal way

class Node{
        public:
            int val;
            int key;
            Node* left;
            Node* right;        
    
            Node(int data,int key){
                this->val=data;
                this->key=key;
            }       
            
};



class LRUCache {
public:
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    unordered_map<int,Node*> m;
    int size = 0;
    int cap;
    
    LRUCache(int capacity) {
        this->cap = capacity;
        head->right = tail;
        tail->left = head;
            
        
    }
    
    int get(int key) {
        if(m.find(key)==m.end())
            return -1;
        
        int val = m[key]->val;
        
        m[key]->left->right = m[key]->right;
        m[key]->right->left=m[key]->left;
        
        m.erase(key);
        
        Node* temp = new Node(val,key);
            
        auto last_tail = tail->left;

        // cout<<last_tail->val;

        last_tail->right=temp;
        tail->left = temp;

        temp->right=tail;
        temp->left=last_tail;

        m[key] = temp;
        
        
        return val;
    }
    
    void set(int key, int value) {
        if(m.find(key)!=m.end()){
             int val = m[key]->val;
        
        m[key]->left->right = m[key]->right;
        m[key]->right->left=m[key]->left;
        
        m.erase(key);
        
        Node* temp = new Node(value,key);
            
        auto last_tail = tail->left;

        // cout<<last_tail->val;

        last_tail->right=temp;
        tail->left = temp;

        temp->right=tail;
        temp->left=last_tail;

        m[key] = temp;
            return;
        }
        
        if(size<cap){
            Node* temp = new Node(value,key);
            
            auto last_tail = tail->left;
            
            // cout<<last_tail->val;
            
            last_tail->right=temp;
            tail->left = temp;
            
            temp->right=tail;
            temp->left=last_tail;
         
            m[key] = temp;
            
            size++;
        }else{
            
            auto next_head = head->right;
            next_head->right->left = head;
            head->right = next_head->right;
            
            m.erase(next_head->key);
                
            Node* temp = new Node(value,key);

            auto last_tail = tail->left;

            last_tail->right=temp;
            tail->left = temp;
            
            temp->right=tail;
            temp->left=last_tail;
         
            m[key] = temp;

        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

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