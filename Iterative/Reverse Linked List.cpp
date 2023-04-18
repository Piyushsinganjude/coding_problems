class Solution {
public:
    ListNode* reverseList(ListNode* head) {
     ListNode* prev = NULL , *curr= head;
     while(curr != NULL){
         ListNode *temp = curr->next;
         curr->next = prev;
         prev = curr;
         curr = temp;
     }
     return prev;   
    }
};
https://leetcode.com/problems/reverse-linked-list/description/
