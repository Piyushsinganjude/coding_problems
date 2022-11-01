## Contains Duplicate II
Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

 

Example 1:

Input: nums = [1,2,3,1], k = 3
Output: true
Example 2:

Input: nums = [1,0,1,1], k = 1
Output: true
Example 3:

Input: nums = [1,2,3,1,2,3], k = 2
Output: false
```

## Solution 

```java
class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        HashMap <Integer , Integer> map = new HashMap<Integer , Integer> ();
        for(int i =0;i<nums.length;i++){
            int current = nums [i];
            if(map.containsKey(current) && i- map.get(current) <=k) {
                return true;
            }else {
                map.put(current, i);
            }
        }
        return false;
    }
}

```
#### Complexity
```bash
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
```
## leetcode
[Contains Duplicate II](https://leetcode.com/problems/contains-duplicate-ii/)
