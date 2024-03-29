class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        int low = 0;
        int mid = 0;
        int high = n-1;
        while ( mid <= high){
            if(arr[mid]==0){
                swap(arr[mid],arr[low]);
                low++;
                mid++;
            } else if(arr[mid]==1){
                mid++;
            } else {
                swap(arr[mid],arr[high]);
                high--;
            }
        }
    }
    
};
Link = https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions
