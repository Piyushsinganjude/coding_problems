## Kadane's Algorithm
Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.


## Example 
```bash
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.

```

## Solution 

```c++
class Solution{

	 public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
      int maxSum = INT_MIN, sum =0;
        for(int i=0; i<n; i++){
            sum += arr[i];
            maxSum = max(maxSum, sum);
            if(sum <0){
                sum = 0;
            }
        }
        return maxSum;
    }
};
#### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Geeksforgeeks
[Kadane's Algorithm](https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1?page=1&category[]=Arrays&sortBy=submissions)
