## Valid Anagram
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
## Example 
Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
 
```java
class Solution{

	class Solution {
    public boolean isAnagram(String s, String t) {
     if(s.length() != t.length()) {
         return false;
     }   
        int [] counts = new int [26];
        for(int i = 0; i< s.length();i++){
            counts[s.charAt(i) - 'a']++;
            counts[t.charAt(i) - 'a']--;
        }
        
        for (int i : counts){
            if(i != 0){
                return false;
            }
        }
        return true;
    }
}
 
#### Complexity
```bash
Time Complexity :O(n*n)
Space Complexity : O(1)
```
## Leetcode
[Valid Anagram](https://leetcode.com/problems/valid-anagram/)
