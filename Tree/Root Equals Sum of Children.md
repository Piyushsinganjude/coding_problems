## Root Equals Sum of Children
You are given the root of a binary tree that consists of exactly 3 nodes: the root, its left child, and its right child.

Return true if the value of the root is equal to the sum of the values of its two children, or false otherwise.
## Example 
Input: root = [10,4,6]
Output: true
Explanation: The values of the root, its left child, and its right child are 10, 4, and 6, respectively.
10 is equal to 4 + 6, so we return true.
```java
class Solution{

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean checkTree(TreeNode root) {
        if(root.left==null || root.right==null)
            return true;
        if(root.left.val+root.right.val!=root.val)
            return false;
        boolean a = checkTree(root.left);
        boolean b = checkTree(root.right);
        return (a|b);
    }
}
    
       #### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[ Root Equals Sum of Children](https://leetcode.com/problems/root-equals-sum-of-children/)
