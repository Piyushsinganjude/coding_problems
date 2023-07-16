Node *removeDuplicates(Node *head)
{
 Node* curr = head;
 
 while(curr->next){
     if(curr->data == curr->next->data){
         Node* next_next = curr->next->next;
         delete curr->next;
         curr->next = next_next;
     }
     else {
         curr = curr->next;
     }
 }
 return head;
}
https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1?page=1&difficulty[]=0&category[]=Linked%20List&sortBy=submissions
