## union of two sorted arrays
Union of two arrays can be defined as the common and distinct elements in the two arrays.
Given two sorted arrays of size n and m respectively, find their union.


## Example 
```bash
Input: 
n = 5, arr1[] = {1, 2, 3, 4, 5}  
m = 3, arr2 [] = {1, 2, 3}
Output: 1 2 3 4 5
Explanation: Distinct elements including 
both the arrays are: 1 2 3 4 5.
 

```

## Solution 

```c++
class Solution{

	 public:
   //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
         map<int, int> u;
        vector<int> ans;
        
        for(int i=0; i<n; i++)
        {
            u[arr1[i]]++;
        }
        
        for(int i=0; i<m; i++)
        {
            u[arr2[i]]++;
        }
        
        for(auto it:u)
        {
            ans.push_back(it.first);
        }
        
        return ans;
    }
};
#### Complexity
```bash
Time Complexity :O(n+m)
Space Complexity : O(n+m)
```
## Geeksforgeeks
[union of two sorted arrays](https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?page=1&difficulty[]=0&status[]=unsolved&category[]=Arrays&sortBy=submissions))
