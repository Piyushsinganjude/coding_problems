class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *fast,*slow;
        fast = slow = head;

        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};
https://leetcode.com/problems/middle-of-the-linked-list/
