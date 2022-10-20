##Length of Last Word
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.
 

 
## Example 
Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
```java
class Solution{

	public:
      int lengthOfLastWord(String s) {
         String str =s.trim();
        int count = 0;
        for(int i=str.length()-1;i>=0;i--)
        {
            if(str.charAt(i)!= ' ')
            {
                count++;
            }
            else
            {
                break;
            }
        }
        return count;
    }
}
 
#### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[Length of Last Word](https://leetcode.com/problems/length-of-last-word/)
