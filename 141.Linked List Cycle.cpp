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
    bool hasCycle(ListNode *head) {
       if(!head)
           return false;
        ListNode *fast,*slow;
        slow=head;
        fast=head->next;
        while(1)
        {
            if(!fast||!fast->next)
                return false;
            else if(fast==slow||fast->next==slow)
                return true;
            else{
                slow=slow->next;
                fast=fast->next->next;
            }
        }
    }
};
//用了快慢指针，跑操场快的人，只要时间总能领先慢的人一圈
//加上那行神奇的小代码之后，beat100%。。。即使第一名的也是用快慢指针解的，我甚至有点怀疑leetcode上的水平