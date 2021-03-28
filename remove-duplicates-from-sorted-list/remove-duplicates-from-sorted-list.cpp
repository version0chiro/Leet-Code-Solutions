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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=head;
        if(!head){
            return NULL;
        }
        int tempData=head->val;
        curr=curr->next;
        while(curr){
            // cout<<curr->val;
            if(tempData!=curr->val){
                // cout<<endl<<"going here";
                tempData=curr->val;
                prev->next=curr;
                prev=prev->next;
            }
            else{
                prev->next=NULL;
            }
            curr=curr->next;
        }
        
        
        return head;
        
    }
};