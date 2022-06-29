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
        
        int cnt = 0;
        int size =0;    
        int value;
        ListNode* curr = head;
        
         while(curr!=NULL){
             
             size = size + 1;
             curr=curr->next;
        
        }
        
        curr = head;
        int arr[size];
        
        while(curr!=NULL){
            
            arr[cnt] = curr->val;
            curr = curr->next;
            cnt++;
        }
        
        cout << "The size of the array is :" << size ;
        
        int start =0;
        int end = size-1;
        
        while(start<=end){
            if( arr[start]==arr[end]){
                
                start++;
                end--;
                            
                
            }else{
                return false;
            }
        }
        return true;
        
    }
};