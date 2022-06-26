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
        
        if(head==NULL)
            return NULL;
        
        ListNode* curr = head;
        
        while(curr!=NULL && curr->next!=NULL){
            
            //if next node is dupicate
            if(curr->next->val==curr->val){
                
                ListNode* next_next = curr->next->next;
                delete(curr->next);
                curr->next=next_next;
                                
            }
            //if next node is not duplicate
            else{
            
            curr= curr->next;
            }
        }
        
        return head;
    }
    
    
};