##sqrt
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

 

Example 1:

Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.
```java
class Solution{
class Solution {
    public int mySqrt(int x) {
        if (x <= 1) return x;
        int start = 0;
        int end = x/2;
        
        while(start<end) {
            int mid = (start+(end-start)/2)+1;
            int div = x/mid;
            if (div == mid) return mid;
            if (div > mid) start=mid;
            else end = mid-1;
        }
        return start;
    }
}
#### Complexity
```bash
Time Complexity :O(log(n))
Space Complexity : O(1)
```
## Leetcode
[sqrt](https://leetcode.com/problems/sqrtx/)
