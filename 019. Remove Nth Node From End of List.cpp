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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode** t1 = &head, *t2 = head;
        for(int i = 0; i < n; ++i)
        {
            t2 = t2->next;
        }
        
        if(t2 == NULL) 
        {
            ListNode* ans = head->next;
            delete head;
            return ans;
        }
        
        while(t2->next != NULL)
        {
            t1 = &((*t1)->next);
            t2 = t2->next;
        }
        (*t1)->next = (*t1)->next->next;
        return head;
    }
};

//t2 runs faster t1 for n nodes
//when t2 is last node, t1 is the node to be deleted
