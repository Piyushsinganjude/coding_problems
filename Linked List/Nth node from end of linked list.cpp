class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           Node* first = head;
           Node* second = head;
           
           for(int i =1;i<n;i++)
           {
               second = second->next;
               if(second == NULL) return -1;
           }
           while(second->next){
               first = first->next;
               second = second->next;
           }
           return first->data;
    }
};
https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1?page=1&difficulty[]=0&category[]=Linked%20List&sortBy=submissions
