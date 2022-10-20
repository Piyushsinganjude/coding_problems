##Search Insert Position
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
```c++
class Solution{

	public:
     int searchInsert(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        while(i<j){
            int mid=(i+j)/2;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]>target)
            j=mid-1;
            else
            i=mid+1;
        }
        if(nums[i]>=target)
        return i;
        else return i+1;
    }
};
  
#### Complexity
```bash
Time Complexity :O(log(n))
Space Complexity : O(1)
```
## Leetcode
[Search Insert Position](https://leetcode.com/problems/search-insert-position/)
