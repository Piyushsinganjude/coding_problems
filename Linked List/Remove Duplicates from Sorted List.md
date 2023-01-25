##Remove Duplicates from Sorted List
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

 
 
## Example 
Input: head = [1,1,2]
Output: [1,2]
## Solution 

```java
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
         ListNode list = head;
         
         while(list != null) {
        	 if (list.next == null) {
        		 break;
        	 }
        	 if (list.val == list.next.val) {
        		 list.next = list.next.next;
        	 } else {
        		 list = list.next;
        	 }
         }
         
         return head;
    }
}
     

    #### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)
