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
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* currA = headA;     
        ListNode* currB = headB;
        
        bool currDa = false;
        bool currDb = false;
        
        while(currA && currB){
            
            if(currA==currB) return currA;
            
            
            
            currA=currA->next;
            
            if(currA == NULL && !currDa){
                currA=headB;
                currDa=true;
            }
            currB=currB->next;
            if(currB == NULL && !currDb){
                currB=headA;
                currDb=true;
            }
            
        }
        
        
        return NULL;
    }
};