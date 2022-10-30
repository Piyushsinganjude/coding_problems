## Binary Tree Preorder Traversal
Given the root of a binary tree, return the preorder traversal of its nodes' values.

 
## Example 
Input: root = [1,null,2,3]
Output: [1,2,3]
Example 2:

Input: root = []
Output: []
```c++
class Solution{

	public:
  /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> a;
    void preorder(TreeNode*root)
    {
        if(root)
        {
            a.push_back(root->val);
            preorder(root->left);
            preorder(root->right);
        }
    }
    
    
    
    vector<int> preorderTraversal(TreeNode* root) {
       preorder(root);
        return a;
    }
};
    #### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/)
