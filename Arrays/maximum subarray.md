##maximum subarray
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.

## Example 
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
```

## Solution 

```c++
class Solution{

	public:
    int maxSubArray(vector<int>& nums) {
      int sum =0;
      int maxi = INT_MIN;
        for(auto it :  nums){
            sum += it;
            maxi = max(sum,maxi);
            if(sum<0) sum = 0;
        }
        return maxi;
    }
};#### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[maximum subarray](https://leetcode.com/problems/maximum-subarray/)
