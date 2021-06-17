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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* dummy_head = new ListNode(-INT_MAX);
        dummy_head->next = head;
        ListNode* reserve_head = dummy_head;
        
        while(dummy_head != nullptr && dummy_head->next != nullptr) {
            if(dummy_head->next->val == val) {
                ListNode* tmp = dummy_head->next;
                dummy_head->next = dummy_head->next->next;
                delete tmp;
            } else {
                dummy_head = dummy_head->next;
            }
        }
        return reserve_head->next;
        
        
    }
};
