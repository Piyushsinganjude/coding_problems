/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       int low = 0 , high = n-1;
       while(low < high){
           int mid = low + (high-low)/2;
           
           if(arr[mid] > arr[mid+1])
           high = mid;
           
           else
           low = mid+1;
       }
       return high;
    }
};
Link = https://practice.geeksforgeeks.org/problems/peak-element/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions
