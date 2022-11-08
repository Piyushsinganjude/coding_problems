## Keyboard Row
Given an array of strings words, return the words that can be typed using letters of the alphabet on only one row of American keyboard like the image below.

In the American keyboard:

the first row consists of the characters "qwertyuiop",
the second row consists of the characters "asdfghjkl", and
the third row consists of the characters "zxcvbnm".
```bash 
Example 1:

Input: words = ["Hello","Alaska","Dad","Peace"]
Output: ["Alaska","Dad"]
Example 2:

Input: words = ["omk"]
Output: []
Example 3:

Input: words = ["adsdf","sfd"]
Output: ["adsdf","sfd"]
```

## Solution 

```cpp
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        map<char, int> mp;
        string a = "qwertyuiopQWERTYUIOP";
        string b = "asdfghjklASDFGHJKL";
        string c = "zxcvbnmZXCVBNM";
        
        for (char &i : a) mp[i] = 1;
        for (char &i : b) mp[i] = 2;
        for (char &i : c) mp[i] = 3;
        
        vector<string> res;
        for (auto &w : words) {
            int f = mp[w[0]], ok = 1;
            for (auto &i : w) if (mp[i] != f) {ok = 0; break;}
            if (ok) res.push_back(w);
        }
        
        return res;
    }
};
```
#### Complexity
```bash
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
```
## leetcode
[Keyboard Row](https://leetcode.com/problems/keyboard-row/description/)
