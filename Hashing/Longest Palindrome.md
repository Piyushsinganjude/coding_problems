## Longest Palindrome
Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome here.
```bash 
Example 1:

Input: s = "abccccdd"
Output: 7
Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.
Example 2:

Input: s = "a"
Output: 1
Explanation: The longest palindrome that can be built is "a", whose length is 1.
```

## Solution 

```cpp
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char , int> counts;
        for(auto c:s) counts[c]++;

        int result = 0;
        bool odd_found = false;
        for(auto& c :counts){
            if(c.second % 2 == 0) result +=c.second;
            else{
                odd_found = true;
                result +=c.second-1;
            }
        }
        if(odd_found) result++;
        return result;
    }
};```
#### Complexity
```bash
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
```
## leetcode
[Longest Palindrome](https://leetcode.com/problems/longest-palindrome/description/)
