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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *current = new ListNode();
        ListNode *temp  = current;
        int sum = 0;

        while(l1 != 0 || l2 !=0 || sum !=0){
            if(l1 != nullptr ){
                sum += l1->val;
                l1= l1->next;
            }
            if(l2 != nullptr ){
                sum += l2->val;
                l2 = l2->next;
            }

            temp ->next = new ListNode(sum % 10);
            temp = temp->next;
            sum/=10;

        }

        return current ->next;
        
    }
};