##Pow(x, n)
Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

 

Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000
```c++
class Solution{

	public:
     double myPow(double x, int n) {
        double ans = 1.0;
        long long nn = n;
        if(nn<0) nn = -1 * nn;
        while(nn) {
            if(nn % 2) {
                ans = ans * x;
                nn = nn-1;
            }
            else{
                x = x* x;
                nn = nn/2;
            }
        }
        if(n<0) ans = (double) (1.0) / (double) (ans);
            return ans;
    }
};
#### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[Pow(x, n)](https://leetcode.com/problems/powx-n/)
