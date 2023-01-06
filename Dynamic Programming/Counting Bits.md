## Counting Bits
Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10
Example 2:

Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101
```

## Solution 

```c++
class Solution{
public:
   vector<int> countBits(int n) {
        vector<int> t(n+1);
        t[0]=0;
        for(int i =1;i<=n;++i)
        {
            t[i]=t[i/2] + i%2;
        }
        return t;
    }
};
```
#### Complexity
```bash
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)


```
## leetcode
[Counting Bits](https://leetcode.com/problems/counting-bits/description/)
