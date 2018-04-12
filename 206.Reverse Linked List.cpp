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
    ListNode* reverseList(ListNode* head) {
        ListNode *temp = NULL , *nextNode = NULL;
        while(head){
            nextNode = head->next;
            head->next = temp;
            temp = head;
            head = nextNode;
        }
        return temp;
    }
};
//大佬令人窒息的操作，虽然勉强理解，但要我写比较难