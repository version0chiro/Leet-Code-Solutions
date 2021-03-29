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
    bool isPalindrome(ListNode* head) {
        string s="";
        
        while(head){
            s+=to_string(head->val);
            head=head->next;
        }
        
        int n = s.length();
        if(n%2==0){
            int mid2=n/2;
            // cout<<s[mid2]<<" "<<mid2<<endl;
            int mid1=n/2 -1;
            // cout<<s[mid1]<<" "<<mid1<<endl;
            while(mid1>=0 && mid2<n && s[mid1]==s[mid2]){
                // cout<<s[mid1]<<" "<<s[mid2]<<endl;
                mid1--;
                mid2++;
            }
            if(mid1==-1 && mid2==n){
                return true;
            }
            else{
                return false;
            }
            
            
        }else{
            int mid2=n/2;
            // cout<<s[mid2]<<" "<<mid2<<endl;
            int mid1=n/2;
            // cout<<s[mid1]<<" "<<mid1<<endl;
            while(mid1>=0 && mid2<n && s[mid1]==s[mid2]){
                // cout<<s[mid1]<<" "<<s[mid2]<<endl;
                mid1--;
                mid2++;
            }
            if(mid1==-1 && mid2==n){
                return true;
            }
            else{
                return false;
            }
            
            

            
        }
        
        
        // cout<<s<<"==="<<n;
        
        
        return false;
    }
};