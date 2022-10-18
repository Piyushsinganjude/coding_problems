##Find the Duplicate Number
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.
 
## Example 
Input: nums = [1,3,4,2,2]
Output: 2
## Solution 

```c++
class Solution{

	public:int findDuplicate(vector<int>& nums) {
      map<int,int> mp;
      for(auto i:nums){
          if(mp.find(i)!=mp.end()){
              return i;
          }
          mp[i]++;
      }
      return 0;

        
    }
};  

    #### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)
