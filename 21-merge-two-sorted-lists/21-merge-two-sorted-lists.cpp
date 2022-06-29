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
    ListNode* mergefunction(ListNode* list1, ListNode* list2) {
        
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        ListNode* next1 = list1->next;
        ListNode* next2 = list2->next;
        
        if(next1==NULL ){
            curr1->next=curr2;
        }
        
        while(next1!=NULL && curr2!=NULL){
            
            if((curr2->val>=curr1->val) && (curr2->val<=next1->val)){
                
                curr1->next=curr2;
                next2=curr2->next;
                curr2->next=next1;
                curr2=next2;
                
                curr1=curr1->next;  
                
            }else{
               
                curr1=curr1->next;
                next1=next1->next;
                
                
            }
                        
        }
         if(next1==NULL && curr2!=NULL){
                    
                    curr1->next=curr2;
                    
                }
 
       return list1;
    }
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
         
        ListNode* ans = NULL;
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        
        if(list1->val>= list2->val){
            ans = mergefunction(list2,list1);
                                
        }else if(list1->val<=list2->val){
            
            ans = mergefunction(list1,list2);
        }
        
        return ans;
    }
};