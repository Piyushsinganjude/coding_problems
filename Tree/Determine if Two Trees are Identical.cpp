class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
         if(r1 == NULL && r2 == NULL)
            return true;
        if(r1 == NULL || r2 == NULL)
            return false;
        return r1->data == r2->data 
        && isIdentical(r1->left, r2->left)
        && isIdentical(r1->right, r2->right);
    }
};
https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1?page=1&difficulty[]=0&category[]=Tree&sortBy=submissions
