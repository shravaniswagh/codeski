class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        ListNode* prev = current;
        
        if(head == nullptr){
            return 0;
        }
        while(current->next != NULL){
            if(current->val == current->next->val){
                
                    
               current->next = current->next->next;
               
                
            }
            else{
                current = current->next;
                
               
            }
        }
        
        return head;
        
    }
};