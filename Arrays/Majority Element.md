## Majority Element
Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array..


## Example 
```bash
Input:
N = 3 
A[] = {1,2,3} 
Output:
-1
Explanation:
Since, each element in 
{1,2,3} appears only once so there 
is no majority element.

```

## Solution 

```c++
class Solution{

	 public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int size)
    {
        
        int el = 0;
        int count = 0;
        for(int i=0;i<size;i++){
            if(count == 0){
                el = arr[i];
            }
            if(el == arr [i]) count ++;
            else count--;
        }
        count =0;
        for(int i=0;i<size;i++){
            if(el == arr[i]){
                count ++;
            }
        }
        if(count > size/2){
            return el;
        }return -1;
        
#### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Geeksforgeeks
[Majority Element](https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1?page=1&company[]=Microsoft&category[]=Arrays&sortBy=submissions))
