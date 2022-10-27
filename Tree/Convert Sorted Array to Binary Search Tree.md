## Convert Sorted Array to Binary Search Tree
Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.

 
 
## Example 
Example 1:


Input: nums = [-10,-3,0,5,9]
Output: [0,-3,9,-10,null,5]
Explanation: [0,-10,5,null,-3,null,9] is also accepted:
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0) return NULL;
        return bst(nums,0,nums.size()-1);
    }
    
    TreeNode* bst(vector<int>nums,int left,int right){
        if(left>right) return NULL;
        int midpoint = left + (right-left)/2;
        TreeNode* node = new TreeNode(nums[midpoint]);
        node->left = bst(nums,left,midpoint-1);
        node->right = bst(nums,midpoint+1,right);
        return node;
    }
};  #### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/)
