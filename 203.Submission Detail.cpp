//rank:h
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
    ListNode* removeElements(ListNode* head, int val) {
        if (!head)
            return NULL;
        
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode *pre = dummy;
        ListNode *cur = head;
        while (cur){
            if (cur->val == val){
                pre->next = cur->next;
                // setup for next
                cur = cur->next;
            }else{
                // setup for next
                pre = cur;
                cur = cur->next;
            }
        }
        return dummy->next;
    }
};