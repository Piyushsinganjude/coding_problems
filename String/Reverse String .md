## Reverse String
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.
## Example 
Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
```java
class Solution {
    public void reverseString(char[] s) {
        int left = 0;
        int right = s.length-1;
        while(left<right){
            char tmp = s[left];
            s[left++] = s[right];
            s[right--] = tmp;
        }
    }
}

 
#### Complexity
```bash
Time Complexity :O(log(n)
Space Complexity : O(1)
```
## Leetcode
[Reverse String](https://leetcode.com/problems/reverse-string/description/)
