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
    ListNode* temp;
    bool isPalindrome(ListNode* head) {
        temp = head;
        return check(head);
    }
    
    bool check(ListNode* p) {
        if (NULL == p) return true;
        bool isPal = check(p->next) & (temp->val == p->val);
        temp = temp->next;
        return isPal;
    }
};
//@sys See Meng-Ju's solution, when the p hits the end (nullptr), it will starts tracing back in reverse order, end, end-1, end-2; however, the head pointer is passed by reference, so it will march in forward order, 0, 1, 2.
//Therefore, you are comparing from two ends toward the center.
//一段通俗的解释，但是我的C++知识似乎有些问题，我看不出它是怎么到最后的，并且从最后往前传递
/*
 bool isPalindrome(ListNode* head) {
        if(head==NULL) return true;
        return find(head,head->next)==NULL?false:true;
    }
    
    ListNode* find(ListNode* head,ListNode* nex) {
        
        //If only one element
        if(nex==NULL) return head;
        
        //If you reach the last element
        if(nex->next==NULL)
            return head->val==nex->val ? head->next : NULL;
        
        //Recursively call till you reach last element.
        //As soon as you reach the last element, Just return the next of the head
        //So that previous calls can use that refernce and compare with the second last and so on
        
        ListNode* checkhead = find(head,nex->next);
        
        if(checkhead==NULL) return NULL;

        return checkhead->val==nex->val?checkhead->next:NULL;
        
    }
    */
