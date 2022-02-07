class Node{
    public:
    int data;
    int id;
    Node* next;
    Node* prev;
    
    Node(int data,int id){
        this->data=data;
        this->id=id;
        
    }
};

class LRUCache {
public:
    unordered_map<int,Node*> m;
    
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    
    int cap = 0;
    
    LRUCache(int capacity) {
        this->cap = capacity;
        this->head->next = this->tail;
        this->tail->prev=this->head;
        
    }
    
    int get(int key) {
        if(m.find(key)!=m.end()){
            
            auto ansN = m[key];
            
            ansN->prev->next=ansN->next;
            ansN->next->prev=ansN->prev;
            
            ansN->next = head->next;
            ansN->prev = head;
            
            head->next->prev = ansN;
            head->next = ansN;
            
            return ansN->data;
            
        }
        return -1;
        
    }
    
    void put(int key, int value) {
        
        if(m.find(key)!=m.end()){
            m[key]->data = value;
             auto ansN = m[key];
            
            ansN->prev->next=ansN->next;
            ansN->next->prev=ansN->prev;
            
            ansN->next = head->next;
            ansN->prev = head;
            
            head->next->prev = ansN;
            head->next = ansN;
            return;
        }
        
        
        if(cap<=0){
            
            auto tempD = this->tail->prev;
            
            this->tail->prev = tempD->prev;
            
            tempD->prev->next= this->tail;
            
            cout<<"removing "<<tempD->id<<"\n";
            
            
            m.erase(tempD->id);
            
            delete tempD;
            
            
        }
        
            Node* temp = new Node(value,key);
            temp->next = head->next;
            temp->prev = head;
            head->next->prev = temp;
            head->next = temp;
            
            m[key]=temp;
        
        cap--;
            
            
        
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */