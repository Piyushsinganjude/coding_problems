## Find All Numbers Disappeared in an Array
Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.
```bash 
Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]
Example 2:

Input: nums = [1,1]
Output: [2]
```

## Solution 

```java
class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
    int[] temp=new int[nums.length+1];
    List<Integer> list=new ArrayList<>();
    for(int i=0;i<nums.length;i++)
    {
        temp[nums[i]]=nums[i];
    }
    
    for(int i=1;i<temp.length;i++)
    {
        if(temp[i]==0)
          list.add(i);
    }
    return list;
}
}

```
#### Complexity
```bash
Expected Time Complexity: O(N*N)
Expected Auxiliary Space: O(N)
```
## leetcode
[Find All Numbers Disappeared in an Array](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/)
