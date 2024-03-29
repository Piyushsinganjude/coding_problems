class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     map<int,int> m;
     Node* cur = head;
     m[cur->data] = 1;
     Node* prev =cur;
     cur = cur->next;
     while(cur!=NULL){
         if(m[cur->data]){
             prev->next = cur->next;
             free(cur);
         }
         else{
             m[cur->data] =1;
             prev = cur;
         }
         cur = prev->next;
     }
     return head;
    }
};
https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1?page=1&difficulty[]=0&category[]=Linked%20List&sortBy=submissions
