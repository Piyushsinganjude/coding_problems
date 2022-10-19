##two sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
 

 
## Example 
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
```c++
class Solution{

	public:
       vector<int> twoSum(vector<int>& nums, int target) {
        int sum = 0;
        vector<int>ans;
        for(int i =0; i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
              sum = nums[i] + nums[j];
                  if(sum == target)
                  {
                      ans.push_back(i);
                      ans.push_back(j);
                      break;
                  }
            }
        }
        return ans;
    }
};
#### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[two sum](https://leetcode.com/problems/two-sum/)
