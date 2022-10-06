## Intersection of two arrays
Given two arrays a[] and b[] respectively of size n and m, the task is to print the count of elements in the intersection (or common elements) of the two arrays.

For this question, the intersection of two arrays can be defined as the set containing distinct common elements between the two arrays. l to X.
```bash 
Input:
n = 5, m = 3
a[] = {89, 24, 75, 11, 23}
b[] = {89, 2, 4}

Output: 1

Explanation: 
89 is the only element 
in the intersection of two arrays.
```

## Solution 

```c++
class Solution {
  public:
  // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        unordered_set<int>s;
        for(int i =0;i<n;i++)
            s.insert(a[i]);
            int count=0;
            
        for(int i=0;i<m;i++)
        {
            int key = b[i];
            if(s.find(key)!= s.end()){
                count++;
                s.erase(key);
            }
        }
        return count;
    }
};
```
#### Complexity
```bash
Expected Time Complexity: O(n + m).
Expected Auxiliary Space: O(min(n,m).
```
## Geeksforgeeks
[Intersection of two arrays](https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1?page=1&difficulty[]=0&status[]=unsolved&category[]=Arrays&sortBy=submissions)
