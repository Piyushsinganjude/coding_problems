##Binary Tree Inorder Traversal
Given the root of a binary tree, return the inorder traversal of its nodes' values.

 
## Example 
Input: root = [1,null,2,3]
Output: [1,3,2]
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
    void inorder(TreeNode* root, vector <int> &ans){
        if(root!=NULL){
            inorder(root->left,ans);
            ans.push_back(root->val);
            inorder(root->right,ans);
        }
    }
    
    
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> ans;
        inorder(root,ans);
        return ans;
    }
};   #### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/)
