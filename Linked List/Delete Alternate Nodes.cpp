void deleteAlt(struct Node *head){
    Node *ptr = head;
    Node *temp = NULL;
    while(ptr != NULL && ptr->next != NULL){
        temp = ptr->next;
        ptr->next=temp->next;
        free(temp);
        ptr = ptr->next;
    }
}
https://practice.geeksforgeeks.org/problems/delete-alternate-nodes/1?page=1&difficulty[]=-1&category[]=Linked%20List&sortBy=submissions
