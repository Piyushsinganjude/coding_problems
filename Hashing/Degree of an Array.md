## Degree of an Array
Given a non-empty array of non-negative integers nums, the degree of this array is defined as the maximum frequency of any one of its elements.

Your task is to find the smallest possible length of a (contiguous) subarray of nums, that has the same degree as nums.
```bash 
Example 1:

Input: nums = [1,2,2,3,1]
Output: 2
Explanation: 
The input array has a degree of 2 because both elements 1 and 2 appear twice.
Of the subarrays that have the same degree:
[1, 2, 2, 3, 1], [1, 2, 2, 3], [2, 2, 3, 1], [1, 2, 2], [2, 2, 3], [2, 2]
The shortest length is 2. So return 2.
Example 2:

Input: nums = [1,2,2,3,1,4,2]
Output: 6
Explanation: 
The degree is 3 because the element 2 is repeated 3 times.
So [2,2,3,1,4,2] is the shortest subarray, therefore returning 6.
```

## Solution 

```cpp
class Solution {
public:
   class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
      map<int, int> first, last, count;
        // Maintaining 3 maps to store first occurence, last occurence and count of numbers
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(first.count(nums[i]) == 0)
                first[nums[i]] = i;
            last[nums[i]] = i;
            count[nums[i]]++;
        }
        // Finding max frequency element of the array
        int max_count = 0;
        for(auto i : count)
            max_count = max(max_count, i.second);
        // ans = to store the ans
        int ans = INT_MAX;
        // Iterating over the map, and finding the min length of subarray containing the max freq element
        // last index - first index of max freq number is our answer
        for(auto i : count)
        {
            if(i.second == max_count)
            {
                ans = min(ans, last[i.first] - first[i.first] + 1);
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
[Degree of an Array](https://leetcode.com/problems/degree-of-an-array/description/)
