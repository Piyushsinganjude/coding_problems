## Balanced Binary Tree
Given a binary tree, determine if it is height-balanced.

 

 
## Example 
Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: true
```c++
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
    int height(TreeNode* root){
        if(root == NULL)
            return 0;
        else
            return max(height(root->left),height(root->right)) +1;
    }
    void inorderUtil(TreeNode* root,bool & ans) {
        if(root!=NULL){
            inorderUtil(root->left,ans);
            int lh = height(root->left);
            int rh = height(root->right);
            
            if(abs(lh-rh) >1)
                ans = ans && false;
                               
            inorderUtil(root->right,ans);
        }
    }
    
    bool isBalanced(TreeNode* root) {
       bool ans = true;
       inorderUtil(root,ans);
       return ans;  
    }
};   #### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)
