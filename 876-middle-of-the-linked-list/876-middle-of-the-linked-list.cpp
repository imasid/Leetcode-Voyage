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
    
    int getLength(ListNode* &head){
        
        int cnt = 0;
        ListNode* temp = head;
        while(temp != NULL){
            
            cnt++;
            temp= temp->next;
        }
        return cnt;
    };
    
    
    ListNode* middleNode(ListNode* head) {
        
  
        
        int len = getLength(head);
        int mid= len/2;
        int cnt = 0;
        
        while(cnt < mid){
          cnt ++ ;
          head = head ->next;  
        };
        
        return head;
    }
};