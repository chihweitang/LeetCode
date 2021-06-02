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
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        
         ListNode *head = new ListNode(0);
         ListNode *tail = head;
        
        
        int carry = 0;
        
        while(l1 || l2 || carry){
            int sum = ((l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry);
       //     ListNode *t = new ListNode(sum%10);
            carry = sum/10;
            
            if(l1)
                l1 = l1->next;
            if(l2)
                l2 = l2->next;
            
            tail->next = new ListNode(sum%10);
            tail = tail->next;
            
        }
        return head->next;
        
    }
};
