class Solution
{
    public:
       Node* reverse(Node *head) {
       Node *temp = head, *prev = NULL, *next;
       while(temp != NULL) {
            next = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = next;
       }
       return prev;
   }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
         first = reverse(first);
         second = reverse(second);
          Node* ans= new Node(0);
          Node* curr= ans;
       Node *temp1 = first;
        Node *temp2 = second;
        int c=0;
       while(temp1 != NULL and temp2 != NULL)
       {
           if(temp1 -> next == NULL and temp2->next==NULL and 
           temp1 -> data + temp2->data + c > 9) {
                Node* p=new Node((temp1->data+temp2->data+c)%10);
                curr->next=p;
                curr= curr->next; 
                 Node* q=new Node(1);
                curr->next=q;
                curr= curr->next;
                temp1=temp1->next;
                temp2=temp2->next;
           }
          else if((temp1->data+temp2->data+c)/10>=1)
           {
               Node* p=new Node((temp1->data+temp2->data+c)%10);
               curr->next=p;
               curr= curr->next; 
               temp1=temp1->next;
               temp2=temp2->next;
                c=1;
           }
           else if((temp1->data+temp2->data+c)/10<1)
           {
               Node* p=new Node((temp1->data+temp2->data+c));
               curr->next=p;
               curr= curr->next; 
               temp1=temp1->next;
               temp2=temp2->next;
                c=0;
           }
       }
       while(temp1 != NULL)
       {
            if(temp1->next == NULL and temp1 -> data + c > 9) {
                Node* p=new Node((temp1->data + c)%10);
                curr->next=p;
                curr= curr->next; 
                 Node* q=new Node(1);
                curr->next=q;
                curr= curr->next;
                temp1=temp1->next;
           }
           
         else if(temp1->data==9 and c==1)
          {
          Node* p=new Node(0);
          curr->next=p;
          curr= curr->next; 
          temp1=temp1->next;
          c=1;
          }
          else
          {
            Node* p=new Node(temp1->data+c);
            curr->next=p;
            curr= curr->next; 
            temp1=temp1->next;
            c=0;
          }
       }
       while(temp2 != NULL)
       {
            if(temp2->next == NULL and temp2 -> data + c > 9) {
                Node* p=new Node((temp2->data + c)%10);
                curr->next=p;
                curr= curr->next; 
                 Node* q=new Node(1);
                curr->next=q;
                curr= curr->next;
                temp2=temp2->next;
           }
           
          else if(temp2->data==9 and c==1)
          {
          Node* p=new Node(0);
          curr->next=p;
          curr= curr->next; 
          temp2=temp2->next;
          c=1;
          }
          else
          {
            Node* p=new Node(temp2->data+c);
            curr->next=p;
            curr= curr->next; 
            temp2=temp2->next;
            c=0;
          }
       }
       return reverse(ans->next);
    }
};
https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1?page=1&difficulty[]=1&category[]=Linked%20List&sortBy=submissions
