## Most Frequent Even Element
Given an integer array nums, return the most frequent even element.

If there is a tie, return the smallest one. If there is no such element, return -1.
```bash 
Example 1:

Input: nums = [0,1,2,2,4,4,1]
Output: 2
Explanation:
The even elements are 0, 2, and 4. Of these, 2 and 4 appear the most.
We return the smallest one, which is 2.
Example 2:

Input: nums = [4,4,4,9,2,4]
Output: 4
Explanation: 4 is the even element appears the most.
```

## Solution 

```cpp
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int ,int> m;
        
        for(auto x: nums)
        {
            if(x%2==0)
                m[x]++;
        }
        
        int freq = 0, ans = -1;
        
        for(auto x:m)
            if(x.second>freq)
                ans=x.first , freq=x.second;
        return ans;
    }
};
}```
#### Complexity
```bash
Expected Time Complexity: O(N*N)
Expected Auxiliary Space: O(N)
```
## leetcode
[Most Frequent Even Element](https://leetcode.com/problems/most-frequent-even-element/)
