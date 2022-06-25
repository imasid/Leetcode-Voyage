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
        
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
            return NULL;
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        while(slow!=NULL && fast!=NULL){

            fast= fast->next;
            
            if(fast->next!=NULL){
                fast=fast->next;
            }
            
            if(fast->next==NULL){
                return NULL;
            }
            slow = slow->next;
            
        
            if(slow==fast)break;              
                      
            
        }
        
        if(slow==fast){
        slow = head;
        ListNode *intersection = fast;
        while(slow!=intersection){
            
            slow=slow->next;
            intersection=intersection->next;
        }
        
        return slow;
        }else{
            return NULL;
        }
    }
    
    
};