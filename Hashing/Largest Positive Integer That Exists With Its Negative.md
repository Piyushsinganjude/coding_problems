## Largest Positive Integer That Exists With Its Negative
Given an integer array nums that does not contain any zeros, find the largest positive integer k such that -k also exists in the array.

Return the positive integer k. If there is no such integer, return -1.
Input: nums = [-1,2,-3,3]
Output: 3
Explanation: 3 is the only valid k we can find in the array.
```

## Solution 

```c++
class Solution {
  public:
   int findMaxK(vector<int>& nums) {
        // sort the numbers
        sort(nums.begin(),nums.end());
        int l = 0, h = nums.size()-1;
        while(l < h){
            int sum = nums[l] + nums[h];
            // if sum is zero we have found our answer
            if(sum == 0)
                return nums[h];
            else if(sum > 0){
                h--;
            }else{
                l++;
            }
        }
        return -1;
    }
};
        

```
#### Complexity
```bash
Expected Time Complexity: O(NLog(N))
Expected Auxiliary Space: O(N)
```
## Geeksforgeeks
[Largest Positive Integer That Exists With Its Negative](https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/)
