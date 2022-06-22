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
        int getLengthOfLinkedList(ListNode *head){
                 
        ListNode *ptr = head;
        int cnt=0;
        while(ptr)
        {
            cnt++;
            ptr=ptr->next;
        }
        return cnt;
    }
    
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        //base case
        if(head == NULL){
            
            return NULL;
        }
        
        int len = getLengthOfLinkedList(head);
        if(len<k){
            
            return head;
        }
        
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* fwd = NULL;
        int cnt = 0;
        
        while(curr != NULL && cnt < k){
          
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
            cnt++;
        };
        
        if(fwd != NULL){
            
            head ->next = reverseKGroup(curr , k);
        }
        
        
        return prev;
        
        
        
    }
};