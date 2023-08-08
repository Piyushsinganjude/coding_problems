class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        if(node==NULL){
            return;
        }
        Node* temp;
        temp= node->left;
        node->left=node->right;
        node->right=temp;
        mirror(node->left);
        mirror(node->right);
    }
};
https://practice.geeksforgeeks.org/problems/mirror-tree/1?page=1&difficulty[]=0&category[]=Tree&sortBy=submissions
