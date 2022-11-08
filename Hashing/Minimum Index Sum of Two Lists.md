##  Minimum Index Sum of Two Lists
Given two arrays of strings list1 and list2, find the common strings with the least index sum.

A common string is a string that appeared in both list1 and list2.

A common string with the least index sum is a common string such that if it appeared at list1[i] and list2[j] then i + j should be the minimum value among all the other common strings.

Return all the common strings with the least index sum. Return the answer in any order.
```bash 
Example 1:

Input: list1 = ["Shogun","Tapioca Express","Burger King","KFC"], list2 = ["Piatti","The Grill at Torrey Pines","Hungry Hunter Steakhouse","Shogun"]
Output: ["Shogun"]
Explanation: The only common string is "Shogun".
Example 2:

Input: list1 = ["Shogun","Tapioca Express","Burger King","KFC"], list2 = ["KFC","Shogun","Burger King"]
Output: ["Shogun"]
Explanation: The common string with the least index sum is "Shogun" with index sum = (0 + 1) = 1.
Example 3:

Input: list1 = ["happy","sad","good"], list2 = ["sad","happy","good"]
Output: ["sad","happy"]
Explanation: There are three common strings:
"happy" with index sum = (0 + 1) = 1.
"sad" with index sum = (1 + 0) = 1.
"good" with index sum = (2 + 2) = 4.
The strings with the least index sum are "sad" and "happy".
```

## Solution 

```cpp
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int n1 = list1.size();
        
        int n2 = list2.size();
        
        int mini = INT_MAX;
        
        unordered_map<int, vector<string>> mp;
        
        for(int i = 0; i < n1; i++)
        {
            for(int j = 0; j < n2; j++)
            {
                if(list1[i] == list2[j])
                {
                    mp[i + j].push_back(list1[i]);
                    
                    mini = min(mini, i + j);
                }
            }
        }
        
        return mp[mini];
    }
}; 
        
        
        
        
       
```
#### Complexity
```bash
Expected Time Complexity: O(N*M)
Expected Auxiliary Space: O(N*M)
```
## leetcode
[ Minimum Index Sum of Two Lists]()
