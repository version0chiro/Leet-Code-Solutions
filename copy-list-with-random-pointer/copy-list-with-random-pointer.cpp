/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* curr=head;
        unordered_map<int,Node*> m;
        unordered_map<Node*,Node*> m2;
        unordered_map<Node*,int> m3;
        int pos=0;
        
        while(curr){
            m[pos]= new Node(curr->val);
            m3[curr] = pos;
            pos++;
            curr=curr->next;
        }
        curr=head;
        pos=0;
        while(curr){
            // cout<<pos<<" ";
            if(curr->random){
                int temp = m3[curr->random];
                m[pos]->random = m[temp];
            }
            if(curr->next){
                m[pos]->next=m[pos+1];
            }
            pos++;
            curr=curr->next;
        }
        return m[0];
//         while(curr){
//             m[pos]=new Node(curr->val);
//             if(curr->random && m2.find(curr->random)==m2.end()){
//                 m2[curr->random] = new Node(curr->random->val);
                
//             }
//             curr=curr->next;
//             pos++;
//         }
//         curr = head;
//         pos=0;
//         while(curr){
//             if(curr->random){
//                 m[pos]->random = m2[curr->random];
//             }
//             if(curr->next)
//                 m[pos]->next = m[pos+1];
//             pos++;
//             curr=curr->next;
//         }
//         curr=m[0];
        
        // return curr;
    }
};