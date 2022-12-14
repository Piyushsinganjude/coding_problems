## First Unique Character in a String
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

 
```bash 
Example 1:

Input: s = "leetcode"
Output: 0
Example 2:

Input: s = "loveleetcode"
Output: 2
Example 3:

Input: s = "aabb"
Output: -1
```

## Solution 

```cpp
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;

        for(int i=0; i<s.length(); i++)
            mp[s[i]]++;

        for(int i=0; i<s.length(); i++){
            if(mp[s[i]]==1)
                return i;
        }

        return -1;
    }
};
```
#### Complexity
```bash
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
```
## leetcode
[First Unique Character in a String](https://leetcode.com/problems/first-unique-character-in-a-string/description/)
