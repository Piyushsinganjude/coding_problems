## Binary Tree Postorder Traversal
Given the root of a binary tree, return the postorder traversal of its nodes' values.

 
## Example 
Input: root = [1,null,2,3]
Output: [3,2,1]
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
    vector<int>ans;
    void postorder(TreeNode* root){
        if(root == NULL) return;
        postorder(root->left);
        postorder(root->right);
        ans.push_back(root->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
            return ans;
    }
};  #### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/)
