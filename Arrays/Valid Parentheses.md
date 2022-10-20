##Valid Parentheses
 Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.

 
## Example 
Input: s = "()"
Output: true
```python3
class Solution:
    def isValid(self, s: str) -> bool:
        closed = {')': '(', ']': '[', '}': '{'}
        stack = []
        for char in s:
            if char not in closed:
                stack.append(char)
            else:
                if not stack:
                    return False
                if stack[-1] != closed[char]:
                    return False
                stack.pop()
        return False if stack else True
#### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
