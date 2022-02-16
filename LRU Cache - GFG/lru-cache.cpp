// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// design the class in the most optimal way

struct Node{
    int key,val;
    struct Node* prev;
    struct Node* next;
    Node(int _key, int _val){
        key = _key;
        val = _val;
        prev = next = NULL;
    }
};

class LRUCache
{
    private:
    int cap;
    int size;
    struct Node* head;
    struct Node* tail;
    unordered_map<int, struct Node*> mp;

    public:
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int _cap)
    {
        // code here
        cap = _cap;
        mp.clear();
        size = 0;
        head = tail = NULL;
    }
    
    //Function to return value corresponding to the key.
    int get(int key)
    {
        // your code here
        if(mp.find(key) != mp.end()){
            set(key, mp[key]->val);
            return mp[key]->val;
        }
        return -1;
    }
    
    //Function for storing key-value pair.
    void set(int key, int value)
    {
        // your code here
        if(mp.find(key) != mp.end()){
            struct Node* temp = mp[key];
            temp->val = value;
            
            // temp == head
            if(temp == head) return;
            
            //temp == tail
            if(temp==tail){
                tail = tail->prev;
                tail->next = NULL;
                temp->prev = NULL;
                
                temp->next = head;
                head->prev = temp;
                head = temp;
            }else{ // temp in middle
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                
                temp->prev = NULL;
                temp->next = head;
                head->prev = temp;
                head = temp;
            }
        }else{
            struct Node* temp = new Node(key, value);
            mp[key] = temp;
            
            if(size == cap){
                mp.erase(tail->key);
                if(head == tail){
                    head = tail = temp;
                }else{
                    tail = tail->prev;
                    tail->next = NULL;
                    
                    temp->next = head;
                    head->prev = temp;
                    head = temp;
                }
            }else{
                size++;
                if(head==NULL){
                    head = tail = temp;
                }else{
                    temp->next = head;
                    head->prev = temp;
                    head = temp;
                }
            }
        }
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