## find all pairs with a given sum
Given two unsorted arrays A of size N and B of size M of distinct elements, the task is to find all pairs from both arrays whose sum is equal to X.
```bash 
Input:
A[] = {1, 2, 4, 5, 7}
B[] = {5, 6, 3, 4, 8} 
X = 9 
Output: 
1 8
4 5 
5 4
Explanation:
(1, 8), (4, 5), (5, 4) are the
pairs which sum to 9.
```

## Solution 

```c++
class Solution {
  public:
   vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here 
        unordered_set<int>s;
        vector<pair<int,int>>ans;
        for(int i=0;i<N;++i)
        {
            s.insert(A[i]);
        }
        for(int j=0;j<M;++j)
        {
            if(s.find(X-B[j])!=s.end())
            {
                ans.push_back(make_pair(X-B[j],B[j]));
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
```
#### Complexity
```bash
Expected Time Complexity: O(NLog(N))
Expected Auxiliary Space: O(N)
```
## Geeksforgeeks
[find all pairs with a given sum](https://practice.geeksforgeeks.org/problems/find-all-pairs-whose-sum-is-x5808/1?page=3&difficulty[]=0&category[]=Arrays&sortBy=submissions)
