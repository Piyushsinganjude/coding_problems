int helper(Node* root , int X , int& cnt)
{
    int sum = 0 , lsum = 0 , rsum = 0;
    if(root->left)
     lsum = helper(root->left, X , cnt);
    if(root->right)
     rsum = helper(root->right , X , cnt);
    
    sum = lsum + rsum + root->data;
    if(sum == X) cnt++;
    return sum;
}
int countSubtreesWithSumX(Node* root, int X)
{
  int cnt = 0;
  helper(root, X , cnt);
  return cnt;
}
LINK = (https://practice.geeksforgeeks.org/problems/count-number-of-subtrees-having-given-sum/1?page=1&difficulty[]=1&category[]=Recursion&sortBy=submissions)
