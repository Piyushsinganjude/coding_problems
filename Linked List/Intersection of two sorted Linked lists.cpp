Node* findIntersection(Node* head1, Node* head2)
{
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* head = NULL;
    Node* cur = NULL;
    while(ptr1 and ptr2){
        if(ptr1->data==ptr2->data){
            if(head==NULL) {
                Node* t = new Node(ptr1->data);
                head=t;
                cur = t;
            }
            else {
                Node* t = new Node(ptr1->data);
                cur->next=t;
                cur = cur->next;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        } else {
            if(ptr1->data < ptr2->data){
                ptr1=ptr1->next;
            } else {
                ptr2=ptr2->next;
            }
        }
    }
    return head;
}
https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1?page=1&difficulty[]=0&category[]=Linked%20List&sortBy=submissions
