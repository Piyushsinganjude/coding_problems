class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector< int > result;
   vector< int > inOrder( Node* node ) {
    if ( !node ) return {};
    inOrder( node->left );
    result.push_back( node->data );
    inOrder( node->right );
    return result;
    }
};
https://practice.geeksforgeeks.org/problems/inorder-traversal/1?page=1&difficulty[]=-2&difficulty[]=-1&category[]=Tree&sortBy=submissions
