/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next) return NULL;
        ListNode* fastPointer = head;
        ListNode* slowPointer = head;
        
        while(fastPointer->next && fastPointer->next->next ){
            fastPointer = fastPointer->next->next;
            slowPointer = slowPointer ->next;
            if(fastPointer == slowPointer ){
                // break;
               while(slowPointer!=head){
                   cout<<head->val<<" "<<slowPointer->val<<endl;
                 head=head->next;
                 slowPointer=slowPointer->next;
                }
                return head;
            }
            
        }
        
        if(fastPointer == NULL || fastPointer->next==NULL || slowPointer==NULL) return NULL;
        
        
        
        
        
        
        return NULL;
    }
};