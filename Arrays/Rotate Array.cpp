class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void reverse(int arr[],int start,int end){
        while(start <end ){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
    
    
    
    
    
    void rotateArr(int arr[], int d, int n){
        d = d%n;
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
    }
};
Link = https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions
