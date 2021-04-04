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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        map< int,ListNode*> m;
        ListNode* curr = head;
        int position=0;
        while(curr){
            m[position]=curr;
            position++;
            curr=curr->next;
        }
        cout<<position<<endl;
        cout<<position - n<<endl;
        if(m[position-n+1]!=NULL){
            if(position-n-1<0){
                return m[position-n+1];
            }else
            m[position-n-1]->next = m[position-n+1];
        }else{
            if(position-n-1<0){
                return NULL;
            }else
            m[position-n-1]->next = NULL;
        }
        // cout<<" "<<m[position-n+1]->val;
        // cout<<" "<<m[position-n]->val;
        // cout<<" "<<m[position-n-1]->val;
        
        
        return head;
    }
};