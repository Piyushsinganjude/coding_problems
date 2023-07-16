class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        struct Node* temp = head;
        int count0 = 0,count1 = 0 , count2 = 0, flag = 0;
        while(temp!= NULL){
            if(temp->data ==0)
            count0++;
            else if(temp->data ==1)
            count1++;
            else
            count2++;
            temp = temp->next;
        }
        temp = head;
        while(count0 > 0){
            temp->data = 0;
            temp = temp->next;
            count0--;
        }
        while(count1 > 0){
            temp->data = 1;
            temp = temp->next;
            count1--;
        }
        while(count2 > 0){
            temp->data = 2;
            temp = temp->next;
            count2--;
        }
        return head;
        
    }
};
https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1?page=1&difficulty[]=0&category[]=Linked%20List&sortBy=submissions
