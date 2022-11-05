## Greatest English Letter in Upper and Lower Case
Given a string of English letters s, return the greatest English letter which occurs as both a lowercase and uppercase letter in s. The returned letter should be in uppercase. If no such letter exists, return an empty string.

An English letter b is greater than another letter a if b appears after a in the English alphabet.
```bash 
Example 1:

Input: s = "lEeTcOdE"
Output: "E"
Explanation:
The letter 'E' is the only letter to appear in both lower and upper case.
Example 2:

Input: s = "arRAzFif"
Output: "R"
Explanation:
The letter 'R' is the greatest letter to appear in both lower and upper case.
Note that 'A' and 'F' also appear in both lower and upper case, but 'R' is greater than 'F' or 'A'.
Example 3:

Input: s = "AbCdEfGhIjK"
Output: ""
Explanation:
There is no letter that appears in both lower and upper case.
```

## Solution 

```cpp
class Solution {
public:
   string greatestLetter(string s) {
        unordered_map<char,int>mp;

        for ( auto it : s){
            mp[it]++;
        }

        sort(s.begin(),s.end());

        string ans = "";
        for(int i =0;i<s.size();i++)
        {
            char l = tolower(s[i]);
            char u = toupper(s[i]);

            if(mp[l] && mp[u])
            {
                ans = u;
            }
        }
        return ans;
    }
};
  
```
#### Complexity
```bash
Expected Time Complexity: O(N*N)
Expected Auxiliary Space: O(N)
```
## leetcode
[Greatest English Letter in Upper and Lower Case](https://leetcode.com/problems/greatest-english-letter-in-upper-and-lower-case/description/)
