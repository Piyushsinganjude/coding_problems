## element with left side smaller and right side greater
Given an unsorted array of size N. Find the first element in array such that all of its left elements are smaller and all right elements to it are greater than it.

Note: Left and right side elements can be equal to required element. And extreme elements cannot be required element.
## Example 
```bash
Input:
N = 4
A[] = {4, 2, 5, 7}
Output:
5
Explanation:
Elements on left of 5 are smaller than 5
and on right of it are greater than 5.

```

## Solution 

```c++
class Solution{

	 public:
    int findElement(int arr[], int n) {
    int minRight[n]={0};
    minRight[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--)
        minRight[i] = min(minRight[i+1],arr[i]);
    int maxLeft = arr[0];
    for(int i=1;i<n-1;i++)
    {
        if(arr[i] >= maxLeft && arr[i] <= minRight[i+1])
            return arr[i];
        if(maxLeft < arr[i])
            maxLeft = arr[i];
    }
    return -1;
}
#### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Geeksforgeeks
[element with left side smaller and right side greater](https://practice.geeksforgeeks.org/problems/unsorted-array4925/1?page=3&difficulty[]=0&category[]=Arrays&sortBy=submissions)
