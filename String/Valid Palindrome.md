##  Valid Palindrome
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.
## Example 
Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
 
```java
class Solution {
    public boolean isPalindrome(String s) {
       s=s.replaceAll("[^a-zA-Z0-9]","");
       s=s.toLowerCase();

       int start = 0,end = s.length()-1;

       while(start<end)
       {
           if(s.charAt(start) != s.charAt(end)){
               return false;
           }
           start ++;
           end--;
       } 
       return
    }
}
 
#### Complexity
```bash
Time Complexity :O(N)
Space Complexity : O(1)
```
## Leetcode
[ Valid Palindrome](https://leetcode.com/problems/valid-palindrome/description/)
