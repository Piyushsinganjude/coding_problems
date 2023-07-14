class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head == NULL || head->next==NULL) return head;
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr= next;
        }
        return prev;
    }
    
};
https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1?page=1&difficulty[]=0&category[]=Linked%20List&sortBy=submissions
