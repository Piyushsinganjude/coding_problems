##  Sort the People
You are given an array of strings names, and an array heights that consists of distinct positive integers. Both arrays are of length n.

For each index i, names[i] and heights[i] denote the name and height of the ith person.

Return names sorted in descending order by the people's heights.
 
 
## Example 
Example 1:

Input: names = ["Mary","John","Emma"], heights = [180,165,170]
Output: ["Mary","Emma","John"]
Explanation: Mary is the tallest, followed by Emma and John.
Example 2:

Input: names = ["Alice","Bob","Bob"], heights = [155,185,150]
Output: ["Bob","Alice","Bob"]
Explanation: The first Bob is the tallest, followed by Alice and the second Bob.
## Solution 

```cpp
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int,string>>a(n);
        for(int i =0;i<n;i++){
         a[i].first = heights[i];
         a[i].second = names[i];
        }
        sort (a.rbegin(),a.rend());
        vector<string>ans;
        for(int i =0;i<n;i++) ans.push_back(a[i].second);
            return ans;
    }
};
     

    #### Complexity
```bash
Time Complexity :O(n*n)
Space Complexity : O(1)
```
## Leetcode
[ Sort the People](https://leetcode.com/problems/sort-the-people/)
