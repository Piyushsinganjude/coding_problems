int countLeaves(Node* root)
{
  if(root==NULL) return 0;
  if(root->left == NULL && root->right == NULL)
  return 1;
  
  int leftCount = countLeaves(root->left);
  int rightCount = countLeaves(root->right);
  
  return leftCount + rightCount;
}
https://practice.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1?page=1&difficulty[]=-2&difficulty[]=-1&category[]=Tree&sortBy=submissions
