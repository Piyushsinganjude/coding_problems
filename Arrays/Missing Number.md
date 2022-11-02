## Missing Number 
 Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

 
 
## Example 
Example 1:

Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
Example 2:

Input: nums = [0,1]
Output: 2
Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.
## Solution 

```cpp
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]!= i) return i;
        }
        return nums.size();
    }
};
     

    #### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[Missing Number](https://leetcode.com/problems/missing-number/)
