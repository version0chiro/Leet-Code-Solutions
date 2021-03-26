/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l3=new ListNode (); //making a new list node for answer
        ListNode* cur3=l3;  // reference to the head to return from the function
        while(l1 && l2){
            if(l1->val>l2->val){ //just join the smaller nodes to the head node one by one 
                l3->next=l2;
                l2=l2->next;
                l3=l3->next;
                
            }
            else{
                l3->next=l1;
                l1=l1->next;
                l3=l3->next;
            }
            
        }
        
        // connect the remaining list to the end of answer head 
        
        if(l1){
            l3->next=l1;            
        }
        else if(l2){
            l3->next=l2;            
        }
        
        
        
        return cur3->next; //return the head reference->next
    }
};