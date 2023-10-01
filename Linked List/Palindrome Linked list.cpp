class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* prev = NULL;
        ListNode* next;
        ListNode* cur = slow;
        while(cur!=NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }

        fast = head;
        while(prev!=NULL){
            if(fast->val!= prev->val)
            return false;
            fast = fast->next;
            prev = prev->next;
        }
        return true;
    }
};
https://leetcode.com/problems/palindrome-linked-list/
