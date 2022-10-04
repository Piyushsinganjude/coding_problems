## Count More than n/k Occurences
Given an array arr[] of size N and an element k. The task is to find all elements in array that appear more than n/k times.

## Example 
```bash
Input:
N = 8
arr[] = {3,1,2,2,1,2,3,3}
k = 4
Output: 2
Explanation: In the given array, 3 and
 2 are the only elements that appears 
more than n/k times.
```

## Solution 

```c++
class Solution{

	 public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        unordered_map<int,int>m;
        int x=n/k, count =0;
        for(int i =0; i<n; i++){
            m[arr[i]] += 1;
          if (m[arr[i]] > x){
              count +=1;
             m[arr[i]] = -1000;
          }
        }
            
        return count;
    }
};

#### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Geeksforgeeks
[Count More than n/k Occurences](https://practice.geeksforgeeks.org/problems/count-element-occurences/1?page=3&difficulty[]=0&category[]=Arrays&sortBy=submissions)
