## Plus One
Given a non-negative number represented as a list of digits, add 1 to the number (increment the number represented by the digits). The digits are stored such that the most significant digit is first element of array.
## Example 
```bash
Input: 
N = 3
arr[] = {1, 2, 4}
Output: 
1 2 5
Explanation:
124+1 = 125, and so the Output

```

## Solution 

```c++
class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // code here
        for(int i = N-1;i>=0;i--){
            if(arr[i]==9) {
            arr[i] = 0;
            }
            else{
                arr[i]++;
                return arr;
            }
        }
        arr.insert(arr.begin(),1);
        return arr;
    }
};
```
#### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Geeksforgeeks
[Plus One](https://practice.geeksforgeeks.org/problems/plus-one/1?page=2&difficulty[]=0&category[]=Arrays&sortBy=submissions)
