Node* deleteNode(Node *head,int x)
{
    if(head == NULL){
        return head;
    }
    Node* curr = head;
    Node* prev = NULL;
    
    int count = 1;
    while(curr){
        if(count == x){
            if(!prev){
                return curr->next;
            } else {
                prev->next = curr->next;
                delete curr;
                return head;
            }
        }
        prev = curr;
        curr = curr->next;
        count++;
    }
    return head;
}
https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1?page=1&difficulty[]=0&category[]=Linked%20List&sortBy=submissions
