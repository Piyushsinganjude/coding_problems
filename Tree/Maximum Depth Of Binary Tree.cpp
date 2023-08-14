class Solution{
  public:
    /*You are required to complete this method*/
    int maxDepth(Node *root) {
        if(root==NULL){
            return 0;
        }
        int d1 = maxDepth(root->left);
        int d2 = maxDepth(root->right);
        
        return max(d1,d2)+1;
    }
};
https://practice.geeksforgeeks.org/problems/maximum-depth-of-binary-tree/1?page=2&difficulty[]=0&category[]=Tree&sortBy=submissions
