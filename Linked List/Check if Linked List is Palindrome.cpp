class Solution{
  public:
    struct Node* reverseList(struct Node *head){
        if(head == NULL || head->next == NULL) return head;
        Node* rest = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return rest;
    }  
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        Node *slow = head;
        Node *fast = head;
        
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        // Reverse the mid
        
        slow = reverseList(slow);
        
        Node* temp = head;
        
        while(slow){
            if(temp->data != slow->data){
                return false;
            }
            temp = temp->next;
            slow = slow->next;
        }
        return true;
    }
};
https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1?page=1&difficulty[]=1&category[]=Linked%20List&sortBy=submissions
