class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
      if(del->next == NULL){
      return;
      }
      
    Node* prev = del;
    Node* curr = del->next;
    Node* next_next = del->next->next;
    
    prev->data = curr->data;
    
    prev->next = next_next;
    
    delete curr;
    
    return;
    }
};
https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1?utm_source=youtube&utm_medium=collab_codein10_description&utm_campaign=delete-without-head-pointer
