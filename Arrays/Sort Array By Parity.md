##  Sort Array By Parity
Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

Return any array that satisfies this condition.

Example 1:

Input: nums = [3,1,2,4]
Output: [2,4,3,1]
Explanation: The outputs [4,2,3,1], [2,4,1,3] would also be accepted.
Example 2:

Input: nums = [0]
Output: [0]
 
```c++
class Solution {
public:
   vector<int> sortArrayByParity(vector<int>& nums) {
       for (int i = 0, j = 0; j < nums.size(); j++)
            if (nums[j] % 2 == 0) swap(nums[i++], nums[j]);
        return nums; 
    }
};
#### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[ Sort Array By Parity](https://leetcode.com/problems/sort-array-by-parity/description/)
