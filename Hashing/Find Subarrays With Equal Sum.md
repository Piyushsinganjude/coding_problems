## Find Subarrays With Equal Sum
Given a 0-indexed integer array nums, determine whether there exist two subarrays of length 2 with equal sum. Note that the two subarrays must begin at different indices.

Return true if these subarrays exist, and false otherwise.

A subarray is a contiguous non-empty sequence of elements within an array.
```bash 
Example 1:

Input: nums = [4,2,4]
Output: true
Explanation: The subarrays with elements [4,2] and [2,4] have the same sum of 6.
Example 2:

Input: nums = [1,2,3,4,5]
Output: false
Explanation: No two subarrays of size 2 have the same sum.
```

## Solution 

```cpp
class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int>s;
        
        for(int i=1;i<nums.size();i++)
        {
            if(s.find(nums[i]+nums[i-1]) != s.end())
            {
                return true;
            }
            s.insert(nums[i]+nums[i-1]);
        }
        return false;
    }
};

```
#### Complexity
```bash
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
```
## leetcode
[Find Subarrays With Equal Sum](https://leetcode.com/problems/find-subarrays-with-equal-sum/)
