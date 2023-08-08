class Solution{
    public:
    //Function to find the height of a binary tree.
    int count = 0;
    int height(struct Node* root){
        if(root == NULL)
        return 0;
        
        int h1 = height(root->left);
        int h2 = height(root->right);
        count = 1 + max(h1,h2);
        return count;
    }
};
https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1?page=1&difficulty[]=0&category[]=Tree&sortBy=submissions
