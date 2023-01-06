## Nth Fibonacci Number
Given a positive integer n, find the nth fibonacci number. Since the answer can be very large, return the answer modulo 1000000007.

Example 1:

Input: n = 2
Output: 1 
Explanation: 1 is the 2nd number
of fibonacci series.
Example 2:

Input: n = 5
Output: 5
Explanation: 5 is the 5th number
of fibonacci series.
Explanation:
There are multiple possible solutions.
one of them is (3 4)
We can buy stock on day 3,
and sell it on 4th day, which will 
give us maximum profit
```

## Solution 

```c++
class Solution{
public:
    long long int nthFibonacci(long long int n){
        if(n==0 || n==1)
        {
            return n;
        }
        long long int a =0;
        long long int b =1;
        long long int c =0;
        for(long long int i=2;i<=n;i++){
            c=(a+b)%1000000007;
            a=b;
            b=c;
        }
        return c;
    }
};

```
#### Complexity
```bash
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)


```
## gfg
[Nth Fibonacci Number]()https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1?page=1&difficulty[]=0&category[]=Dynamic%20Programming&sortBy=submissions
