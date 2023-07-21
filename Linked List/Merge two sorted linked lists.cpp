Node* sortedMerge(Node* h1, Node* h2)  
{  
    if(h1==NULL) return h2;
    if(h2==NULL) return h1;
    
    if(h1->data > h2->data){
        Node* temp = h1;
        h1 = h2;
        h2 = temp;
    }
    Node* ans = h1;
    
    while(h1 && h2){
        Node* temp = h1;
        while(h1 && h1->data <= h2->data){
            temp = h1;
            h1 = h1->next;
        }
        temp->next = h2;
        
        Node* tmp = h1;
        h1 = h2;
        h2 = tmp;
    }
    return ans;
}  
https://practice.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1?page=1&difficulty[]=1&category[]=Linked%20List&sortBy=submissions
